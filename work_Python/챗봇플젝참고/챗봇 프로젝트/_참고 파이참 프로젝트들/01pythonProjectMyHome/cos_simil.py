from konlpy.tag import Komoran
import numpy as np
from numpy import dot
from numpy.linalg import norm


# TDM 만들기
# sentence_bow : 명사만 모은 거
# word_dics : 모든 문장들의 명사 다 모은 거
def make_term_doc_mat(sentence_bow, word_dics):
    freq_mat = {}

    for word in word_dics:
        freq_mat[word] = 0  # 모든 단어(=key)에 대해 0으로 초기화
    for word in word_dics:
        if word in sentence_bow:
            freq_mat[word] += 1  # 해당 단어에 대해 value를 1 더함
    return freq_mat

#[1,1,1,1,0,1,1] 이런 거
def make_vector(tdm):
    vec = []
    for key in tdm:
        vec.append(tdm[key]) #해당 key의 value를 vec에 추가
    return vec


#코사인 유사도 계산(제일 나중에 사용됨)
#v1 = A, v2 = B
#v1 v2는 반드시 넘파이 배열이어야 함
def cos_sim(v1, v2):
    return dot(v1,v2)/(norm(v1)*norm(v2))

sentene1 = '6월에 뉴턴은 선생님의 제안으로 트리니티에 입학했다.'
sentene2 = '6월에 뉴트리아를 선생님의 제안으로 트리니티에 입학시켰다.'
sentene3 = '6월에 뉴턴은 선생님을 제안시켜 트리니티 국밥을 시켰다.'


komoran = Komoran()

bow1 = komoran.nouns(sentene1)
bow2 = komoran.nouns(sentene2)
bow3 = komoran.nouns(sentene3)

bow = bow1+bow2+bow3

word_dics = [] #중복 제거하고 모든 단어들 저장
for token in bow:
    if token not in word_dics:
        word_dics.append(token) #리스트에 값 추가

freq_list1 = make_term_doc_mat(bow1, word_dics)
freq_list2 = make_term_doc_mat(bow2, word_dics)
freq_list3 = make_term_doc_mat(bow3, word_dics)
print('TDM')
print(freq_list1)
doc1 = np.array(make_vector(freq_list1))
doc2 = np.array(make_vector(freq_list2))
doc3 = np.array(make_vector(freq_list3))

print(doc1)

r1=cos_sim(doc1,doc2)
r2=cos_sim(doc1,doc3)
r3=cos_sim(doc2,doc3)


print(1,2)
print(r1)
print(1,3)
print(r2)
print(2,3)
print(r3)
