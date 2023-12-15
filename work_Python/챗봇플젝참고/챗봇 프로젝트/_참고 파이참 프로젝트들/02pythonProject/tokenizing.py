from konlpy.tag import Komoran

komo = Komoran()
text = "우리 챗봇은 엔엘피를 좋아해"
mor = komo.morphs(text)
print(mor) #['우리', '챗봇은', '엔', '엘', '피', '를', '좋아하', '아']

postags = komo.pos(text)
print(postags) #[('우리', 'NP'), ('챗봇은', 'NA'), ('엔', 'NNB'), ('엘', 'NNP'), ('피', 'NNG'), ('를', 'JKO'), ('좋아하', 'VV'), ('아', 'EC')]

nouns = komo.nouns(text)
print(nouns) # ['엔', '엘', '피']


komoran = Komoran(userdic='./user_dic.tsv')
text = "우리 챗봇은 엔엘피를 좋아해"
pos = komoran.pos(text)
print(pos) # [('우리', 'NP'), ('챗봇은', 'NA'), ('엔엘피', 'NNG'), ('를', 'JKO'), ('좋아하', 'VV'), ('아', 'EC')]
print(komoran.nouns(text)) # 엔엘피