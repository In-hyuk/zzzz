import numpy
lotto = numpy.random.choice(range(1, 46), 6, replace=False)
print(lotto)
print(numpy.sort(lotto))
#import json

#with open('sample.json', encoding='utf-8') as f:
#    json_object = json.load(f)

#print(json_object)

#count = 0
#for item in json_object:
#    count = count + 1
#    print(count)
#    print(item['BZ_NM'])
#    print(item['GNG_CS'])

