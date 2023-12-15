# 케라스 이용한 손글씨 분류
# 케라스 프레임워크 : 텐서플로우의 라이브러리 중 하나
# 텐서플로우 : 라이브러리
import os
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '2'
#1 필요한 모듈 임포트
import tensorflow as tf
import matplotlib.pyplot as plt
from tensorflow.keras.datasets import mnist
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Flatten, Dense




#2 MNIST 데이터셋 가져오기
#학습용 데이터 셋들
# x_train : 이미지 리스트, 28x28 이미지가 6만개
# y_train : 숫자 리스트 길이가 6만(각 이미지의 값들)

#테스트용
# x_test,y_test : 만 개
(x_train, y_train), (x_test,y_test) = mnist.load_data()
# 픽셀 값은 0~255, 신경망 입력층은 0~1사이의 값만 받음. 따라서 0~1사이의 실수로 정규화시킴
#다시 정규화하여 넘파이 배열에 넣는다.
x_train,x_test = x_train/255.0, x_test/255.0 #데이터 정규화(0~1 실수로 정규화)

#3 tf.data를 사용하여 데이터셋을 섞고 배치 만들기

#학습용 데이터 셋을 shuffle한다. (버퍼사이즈=1만은 중요한 지 모르겠다. 섞을 때 참고하는 값 정도 같다.
#한 번에 섞을 때 만 개씩 섞나?)
ds = tf.data.Dataset.from_tensor_slices((x_train,y_train)).shuffle(buffer_size=10000)
train_size = int(len(x_train)*0.7) #학습셋 : 검증셋 = 7:3
#배치 : 학습시 샘플 수(전체 학습 데이터셋보다 작거나 동일해야 함)
train_ds = ds.take(train_size).batch(20) #학습셋(train_size 만큼 차지)
val_ds = ds.skip(train_size).batch(20) #검증셋(train_size 만큼 생략)


#4 MNIST 분류 모델 구성
#신경망 모델을 구성함
model=Sequential() #순차 모델, 신경망 계층을 순차적으로 더 함
#Flatten : 평탄화 => 28x28 => 뉴런 784개,
# 28x28 가로 세로 2차원 배열을 1차원 배열(784)로 만듦


model.add(Flatten(input_shape=(28,28)))#입력층
#입력개수는 이전 층의 출력 개수로 자동 계산함
model.add(Dense(20,activation='relu'))#은닉층, 출력 크기를 20으로 줄이고 활성화 함수는 ReLU를 씀
model.add(Dense(20,activation='relu'))
model.add(Dense(10,activation='softmax'))#출력층, 출력은 0~9를 판단해야 하니 10, 활성화함수는 Softmax를 씀
#softmax란?
#입력받은 값을 출력으로 0~1사이로 정규화함. 출력값들의 합이 꼭 1이 되므로 확률을 표현할 수 있음
# 가장 큰 출력값을 결괏값으로 사용.

#5 모델 생성
#4는 모델을 정의하고 5는 모델을 실제로 생성함
# 손실함수(=실제 정답과 모델 출력값의 오차를 계산) : sparse_categorical_crossentropy
#=> 다중 클래스를 분류하는 문제에서는 손실 함수로 이 함수를 사용하면 된다고 한다.

# 옵티마이저(=오차를 보정하는 함수) : sgd
# 성능 평가 측정 항목 : accuracy(정확도)
model.compile(loss='sparse_categorical_crossentropy', optimizer='sgd', metrics=['accuracy'])

#6 모델 학습
#5에서 생성한 모델을 이용하여 학습을 진행.
#fit : 학습하는 함수
#학습셋,검증셋,에포크값
#에포크값 : 학습 횟수
#배치와 에포크는 매우 중요한 하이퍼 파라미터
# 에포크가 너무 클 경우 오버피팅(과적합)이 일어날 수 있다. 과하게 학습하여 학습 데이터에서만 좋은 성능을 보임
hist = model.fit(train_ds,validation_data=val_ds, epochs=10)

#7모델 평가
print("모델 평가 시작")
model.evaluate(x_test,y_test)
print("모델 평가 끝")

#8 모델 정보 출력
model.summary()

#9모델 저장
model.save('mnist_model.h5')

#10 학습 결과 그래프 그리기
fig,loss_ax = plt.subplots()
acc_ax = loss_ax.twinx()

#hist : 결과
loss_ax.plot(hist.history['loss'],'y',label='train loss')
loss_ax.plot(hist.history['val_loss'],'r',label='val loss')

acc_ax.plot(hist.history['accuracy'], 'c', label='train acc')
acc_ax.plot(hist.history['val_accuracy'], 'b', label='val acc')

loss_ax.set_xlabel('epoch')
loss_ax.set_ylabel('loss')
acc_ax.set_ylabel('accuracy')

loss_ax.legend(loc='upper left')
acc_ax.legend(loc='lower left')

plt.show()



