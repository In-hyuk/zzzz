from gensim.models import Word2Vec
from konlpy.tag import Komoran
import time

def read_review_data(filename):
    with open(filename,'r',encoding='utf8') as f:
        data = [line.split('\t') for line in f.read().splitlines()] # splitlines = split('\n')
    data = data[1:]
    return data

start = time.time()

review_data = read_review_data('D:\\study\\chatbot\\book_ex\\ch4\\ratings.txt')
print(len(review_data))
#print(review_data)

komoran = Komoran()
docs = [komoran.nouns(sentence[1]) for sentence in review_data]

model = Word2Vec(sentences=docs, vector_size=200, window=4, hs=1, min_count=2, sg=1)

model.save('nvmc.model')


