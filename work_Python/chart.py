import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

# 한글 폰트 설정
plt.rcParams['font.family'] = 'Malgun Gothic'  # 한글 폰트 설정 (맑은 고딕)
plt.rcParams['axes.unicode_minus'] = False  # 한글 폰트 사용 시 마이너스 기호 깨짐 방지

# 데이터프레임 읽어오기
temp = pd.read_csv("소상공인시장진흥공단_상가(상권)정보_대구_202309.csv")

# '시군구명'을 기준으로 가게 갯수를 세기
store_counts_by_sigungu = temp['시군구명'].value_counts()

top_sigungu_counts = store_counts_by_sigungu.head(9)

# 차트 그리기
plt.figure(figsize=(10, 6))
sns.barplot(x=top_sigungu_counts.index, y=top_sigungu_counts.values, palette='viridis')
plt.title('대구 구별 상가 갯수')
plt.xlabel('주소명')
plt.ylabel('상가 갯수')
plt.xticks(rotation=45)
plt.show()

# '상호명'에서 '스타벅스'를 포함하는 행을 찾음
starbucks_data = temp[temp['상호명'].str.contains('스타벅스', case=True, na=False)]

# '시군구명'을 기준으로 가게 갯수를 세기
starbucks_counts = starbucks_data['시군구명'].value_counts()

# 차트 그리기
plt.figure(figsize=(10, 6))
sns.barplot(x=starbucks_counts.index, y=starbucks_counts.values, palette='viridis')
plt.title('대구 구별 스타벅스 갯수')
plt.xlabel('시군구명')
plt.ylabel('스타벅스 갯수')
plt.xticks(rotation=45)
plt.show()

starbucks_data = temp[temp['상호명'].str.contains('스타벅스', case=True, na=False)]
print(starbucks_data[['상호명', '시군구명']])