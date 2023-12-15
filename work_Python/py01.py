from konlpy.tag import Komoran

kom = Komoran() #생성자
text1 = "아버지가 방에 들어갑니다."
text2 = "아버지가방에 들어갑니다."
text3 = "아 기다리고 기다리던"
text4 = "아기다리고기다리던"
#형태소 추출
morphs = kom.morphs(text1)
print(morphs)
#형태소와 품사 태그 추출
pos = kom.pos(text1)
print(pos)
#명사만 추출
nouns = kom.nouns(text1)
print(nouns)
