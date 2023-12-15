import csv #csv 파일 읽는 라이브러리 호출
import pymysql

# f = 파일을 처리하는 변수
# open 함수를 통해 읽어들인 파일에 대한 내용을 저장
f = open('mydata.csv','r')

rdr = csv.reader(f) # 파일 데이터를 읽음

mydatas = [] # 리스트 선언

# 1.연번, 상호명 등 (맨 첫번째 내용) 안나오게 출력하기 (if와 pass 키워드 이용)
isStart = True

for line in rdr :
    if isStart:
        isStart = False
        #pass
    else:
        mydatas.append(line)
f.close()

sql = 'insert into apitable(name, hp, menu) '
sql = sql + "values('%s', '%s', '%s')"

for item in mydatas:
    conn = pymysql.connect(
        host= 'localhost',
        user = 'root',
        password = '1234',
        db = 'apidb',
        charset= 'utf8'
    )
    # with : db 연결 후에 다 되면 자동으로 연결 끊어줌
    # strip() : 양 옆 공백 제거
    # replace() : 특정 문자를 다른 문자로 대체함
    with conn:
        with conn.cursor() as cur: # DB 안에 실제 명령 수행하는 것
            cur.execute(sql % (item[1],item[3],item[4]))
            conn.commit()
