from tensorflow.keras.datasets import mnist
from tensorflow.keras.models import load_model
import matplotlib.pyplot as plt

import os
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '2'
#1 mnist 데이터셋 가져오기
#테스트 셋만 필요하니 train셋은 그냥 아무 변수에 넣은 듯 하다
_, (x_test, y_test) = mnist.load_data()
x_test = x_test/255.0
#print(_)

#2 모델 불러오기
model = load_model('mnist_model.h5')
model.summary()
model.evaluate(x_test, y_test, verbose=2)

#3 테스트 셋에서 20번째 이미지 출력
plt.imshow(x_test[20], cmap="gray")
plt.show()

#4 테스트셋의 20번째 이미지 클래스 분류
picks = [20]
predict = model.predict_classes(x_test[20])
print("손글씨 이미지 예측값 : ", predict)

