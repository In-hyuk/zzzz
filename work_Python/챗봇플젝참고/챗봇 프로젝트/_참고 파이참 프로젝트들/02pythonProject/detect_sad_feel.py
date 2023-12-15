from Preprocess import Preprocess
from IntentModel import IntentModel


p = Preprocess()

intent = IntentModel(model_name='cnn_model.h5', preprocess=p)
query = input()
predict = intent.predict_class(query)
predict_label = intent.labels[predict]

print(query)
print("의도 예측 클래스 : ", predict)
print("의도 예측 레이블 : ", predict_label)
