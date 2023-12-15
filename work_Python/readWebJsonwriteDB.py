import json
import urllib.request
import pymysql

myurl = 'https://api.odcloud.kr/api/3047940/v1/uddi:633f7dab-ffb5-4843-bc65-bd7f3b99dfa2?page=1&perPage=1000&serviceKey=0XISxP5LzT%2F9wRWPYz2uhKSRHFOfy0KEfmeXBhkzW6NnNEX5SRObkPqPCT5VivS7WCXm3IR%2FVoV82ZilEjZx7A%3D%3D'

response = urllib.request.urlopen(myurl)
response = response.read().decode('utf8')

print(response)

# response 데이터를 json 형태로 바꿈
data = json.loads(response)
json_arr = data['data'] # key가 'data' 인 것만 갖고 옴

conn = pymysql.connect(
        host= 'localhost',
        user = 'root',
        password = '1234',
        db = 'apidb',
        charset= 'utf8'
)
sql = 'insert into apitable(name, hp, menu) '
sql = sql + "values('%s', '%s', '%s')"

cur = conn.cursor()
for item in json_arr:
    cur.execute(sql % (item['상호명'],item['전화번호'],item['주메뉴']))
conn.commit()
conn.close() # with 코드가 없으므로 수동으로 닫아줘야 함