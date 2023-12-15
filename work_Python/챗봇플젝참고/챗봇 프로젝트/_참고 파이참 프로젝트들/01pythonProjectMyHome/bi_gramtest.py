from konlpy.tag import Komoran

#bow : sentence를 명사만 추출해놓은 것
#num_gram : 2-gram 등... gram수
def word_ngram(bow, num_gram):
    text = tuple(bow)
    # num_gram 단위로 잘라서 저장(슬라이싱)
    #0:2, 1:3 이렇게
    ngrams = [text[x:x+num_gram] for x in range(0,len(text))]
    return tuple(ngrams)

def similarity(doc1, doc2):
    cnt = 0
    for token in doc1:
        if token in doc2:
            cnt = cnt+1
    return cnt/len(doc1) #doc1에 있는 게 doc2에도 포함되는 개수 / 전체 토큰 수

sentene1 = '6월에 뉴턴은 선생님의 제안으로 트리니티에 입학했다.'
sentene2 = '6월에 뉴트리아를 선생님의 제안으로 트리니티에 입학시켰다.'
sentene3 = '6월에 뉴턴은 선생님을 제안시켜 트리니티 국밥을 시켰다.'

komoran = Komoran()

bow1 = komoran.nouns(sentene1)
bow2 = komoran.nouns(sentene2)
bow3 = komoran.nouns(sentene3)

doc1 = word_ngram(bow1,2)
doc2 = word_ngram(bow2,2)
doc3 = word_ngram(bow3,2)

print(doc1)
print(doc2)
print(doc3)

r1 = similarity(doc1,doc2)
r2 = similarity(doc1,doc3)
r3 = similarity(doc2,doc3)

print(1,2)
print(r1)
print(1,3)
print(r2)
print(2,3)
print(r3)

