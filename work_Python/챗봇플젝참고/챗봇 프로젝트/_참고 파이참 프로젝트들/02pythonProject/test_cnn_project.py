
import os
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '2'


import tensorflow as tf
import pandas as pd
from tensorflow.keras.models import Model, load_model
from tensorflow.keras import preprocessing


#1 데이터 읽어오기
train_file = "D:\\study\\chatbot\\book_ex\\ch6\\chatbot_data.csv"
data = pd.read_csv(train_file,delimiter=',')
features = data['Q'].tolist()
#print(len(features))
#features.insert(0,"니가 이 글을 봤으면")
#print(len(features))
#print(features)
#labels = data['label'].tolist()
q = input()
features.append(q)

#2 단어 인덱스 시퀀스 벡터
corpus = [preprocessing.text.text_to_word_sequence(text) for text in features]
#print(corpus)
tokenizer = preprocessing.text.Tokenizer()
tokenizer.fit_on_texts(corpus) #fit_on_texts() 메서드는 문자 데이터를 입력받아서 리스트의 형태로 변환합니다.
sequences = tokenizer.texts_to_sequences(corpus)
#print(sequences)

MAX_SEQ_LEN  = 15
padded_seqs = preprocessing.sequence.pad_sequences(sequences, maxlen=MAX_SEQ_LEN, padding='post')
#print(padded_seqs)
#3 테스트용 데이터셋 생성
#ds = tf.data.Dataset.from_tensor_slices((padded_seqs,labels))
#ds = ds.shuffle(len(features))
#test_ds = ds.take(2000).batch(20) #테스트 데이터 셋

#4 감정 분류 CNN 모델 불러 오기
model = load_model('cnn_model.h5')
model.summary()
#model.evaluate(test_ds, verbose=2)

#5 테스트용 데이터셋의 10212번째 데이터 출력
#print("단어 시퀀스 : " , corpus[10212])
#print("단어 인덱스 시퀀스 : " , padded_seqs[10212])
#print("문장 분류(정답) : " , labels[10212])

#테스트용 데이터셋의 10212번째 데이터 감정 예측
#picks = [0,10212,10213]
#picks = [len(features)-1]
picks = [11823]
#print(features[len(features)-1])
#print(corpus[17]) # ['다', '괜찮은', '줄', '알았는데']
#print(sequences[17]) #[28, 242, 85, 118]
#print(padded_seqs[17]) #[ 28 242  85 118   0   0   0   0   0   0   0   0   0   0   0]

print(corpus[11823]) # ['다', '괜찮은', '줄', '알았는데']
print(sequences[11823]) #[28, 242, 85, 118]
print(padded_seqs[11823]) #[ 28 242  85 118   0   0   0   0   0   0   0   0   0   0   0]
#다 괜찮은 줄 알았는데
#[ 28 242  85 118   0   0   0   0   0   0   0   0   0   0   0]
#[[ 28 242  85 118   0   0   0   0   0   0   0   0   0   0   0]]
predict = model.predict(padded_seqs[picks]) #토씨틀리면 안 됨 ㅡㅡ
predict_class = tf.math.argmax(predict, axis=1)
#print(features[0])
#print(features[17])
#print(features[11823])
print('감정 예측 점수 : ', predict)
print('감정 예측 클래스 : ' , predict_class.numpy())
'''
1/1 [==============================] - 0s 109ms/step
니가 이 글을 봤으면
감정 예측 점수 :  [[8.9048568e-05 9.9990237e-01 8.6217306e-06]]
감정 예측 클래스 :  [1]
'''

'''
1/1 [==============================] - 0s 125ms/step
니가 이 글을 봤으면
감정 예측 점수 :  [[0.37543464 0.03104726 0.5935181 ]]
감정 예측 클래스 :  [2]

'''
#c = preprocessing.text.text_to_word_sequence("다 괜찮은 줄 알았는데")
#cc = [c,]
#print( cc[0] )
#tokenizer = preprocessing.text.Tokenizer()
#tokenizer.fit_on_texts(cc)

#sequences = tokenizer.texts_to_sequences(cc)
#print("ㅠㅠ",sequences)
#padded_seqs = preprocessing.sequence.pad_sequences(sequences, maxlen=MAX_SEQ_LEN, padding='post')
#print(padded_seqs)
