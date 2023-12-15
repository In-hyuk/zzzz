import json
import urllib.request

myurl = 'https://api.odcloud.kr/api/3047940/v1/uddi:633f7dab-ffb5-4843-bc65-bd7f3b99dfa2?page=1&perPage=1000&serviceKey=0XISxP5LzT%2F9wRWPYz2uhKSRHFOfy0KEfmeXBhkzW6NnNEX5SRObkPqPCT5VivS7WCXm3IR%2FVoV82ZilEjZx7A%3D%3D'

response = urllib.request.urlopen(myurl)
response = response.read().decode('utf8')

print(response)

# response 데이터를 json 형태로 바꿈
data = json.loads(response)
json_arr = data['data'] # key가 'data' 인 것만 갖고 옴
# csv와는 다르게 열 이름(column이름) 을 직접 입력할 수 있음
for item in json_arr:
    print(f"식당명:{item['상호명']}, 대표메뉴:{item['주메뉴']}")
