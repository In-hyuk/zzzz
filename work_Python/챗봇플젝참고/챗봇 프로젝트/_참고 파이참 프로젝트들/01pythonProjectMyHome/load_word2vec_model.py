from gensim.models import Word2Vec

model = Word2Vec.load('D:\\Github\\chatbot\\book_ex\\ch4\\nvmc.model')

print('안성기 : ' , model.wv['안성기'])

print('월요일,화요일', model.wv.similarity(w1='월요일',w2='화요일'))
print('일요일,월요일', model.wv.similarity(w1='일요일',w2='월요일'))

print(model.wv.most_similar('대기업', topn=5))
