# 한줄 주석
# shift + F10 혹은 위의 화살표 클릭
"""
이건 여러 줄 주석도 되고
여러 줄 짜리 문자열도 됨
"""
'''
작은 따음표로도 여러 줄 주석 가능함
여러 줄 주석이자 문자열임
'''
print("Hello")
print("World")

while True:
    print("숫자 입력 : ")
    num = int(input())
    if num == 0 :
        print("처음으로 돌아갈 것")
        continue
    elif num == -1:
        print("반복문 종료")
        break
    else:
        print("입력한 숫자 %d" % num)

