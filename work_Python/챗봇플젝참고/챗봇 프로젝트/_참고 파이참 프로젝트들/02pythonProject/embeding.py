from konlpy.tag import Komoran
import numpy as np

komoran= Komoran()
text = "오늘 날씨는 구름이 많아요."

nouns = komoran.nouns(text)
print(nouns)

dics = {}
for word in nouns:
    if word not in dics.keys():
        dics[word] = len(dics)
print(dics)
# 오늘(key) - 0(value)
# 날씨(key) - 1(value)

nb_classes = len(dics)
print("원핫벡터차원의 크기 : {}".format(nb_classes))
targets = list(dics.values()) #[0,1,2] #딕셔너리를 리스트로 변환(원-핫 인코딩쓰려면 리스트가 필요)
print(targets)
one_hot_targets = np.eye(nb_classes)[targets] #eye:단위행렬, [targets]를 이용하여 단위 행렬을 정렬함
print(np.eye(5)[targets])
print(one_hot_targets)