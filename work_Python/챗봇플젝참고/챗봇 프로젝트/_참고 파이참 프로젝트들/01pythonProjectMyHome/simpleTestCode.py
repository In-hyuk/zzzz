#import json
#h = '{"status":"DONE", "total":"197", "data":[{"cnt":"1"}]}'
#print(json.loads(h)['data'])




import urllib.request
from urllib import parse
import requests
from bs4 import BeautifulSoup
import json
#print("시작")
proxy_url = 'https://free-proxy-list.net/'
proxy_res = requests.get(proxy_url)
proxy_html = proxy_res.content.decode('utf-8', 'replace')
soup = BeautifulSoup(proxy_html, 'lxml')
tbody = soup.select('table[class="table table-striped table-bordered"]')[0].contents[1]
rows = tbody.find_all('tr')
country = 'Korea'
port = '80'
print(rows)
print(len(rows))
count = 0
for row in rows:
    count = count+1
    print(count)
    tds = row.find_all('td')
    #if True:
    #if country in tds[3].text and tds[1].text == port:
    if country in tds[3].text:
        free_proxy = tds[0].text
        proxy = {"https": free_proxy, "http": free_proxy}
        try:
            print('--1--')
            local = parse.quote('동구')
            url = 'https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=%s' % local
            response = requests.get(url, proxies=proxy, verify=False)
            print(f'response : {proxy_res.status_code}')
            html = response.content.decode('utf-8', 'replace')
            soup = BeautifulSoup(html, 'lxml')
            print('!html!')
            #print(json.loads(html))
            print(json.loads(html)['data'])
            print('!soup!')
            #print(soup)
            print('-----2---')
            break
        except Exception as e:
            print("!!!")
            print(f'error occurred : {e}')

import random
#print("배고픈 당신, 떠오르는 말을 적어 보세요.")
#local = parse.quote('중구')
#url = 'https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=%s' % local
#response = urllib.request.urlopen(url)
#response_message = response.read().decode('utf8')
#data = json.loads(response_message, strict=False)
#json_arr = data['data']
#print(json_arr)



'''
import datetime

now = datetime.datetime.now()

print (now.strftime("%Y/%m(%B)/%d %A %p %I:%m:%S, 일년 중 %U 번째주, 일년 중 %j번째 날 "))
print (now.strftime("%c"))
print (now.strftime("%x"))
print (now.strftime("%X"))

#now = datetime.datetime.now()
now_before_1 = now - datetime.timedelta(days=1)

print(now)
print(now_before_1)

print(now_before_1.strftime("%d"))
print(now_before_1.strftime("%Y"))
print(now_before_1.strftime("%m"))

print("%s-%s-%s" % (now_before_1.strftime("%Y"),now_before_1.strftime("%m"),now_before_1.strftime("%d")))
'''