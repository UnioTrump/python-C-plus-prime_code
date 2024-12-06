'''
txt = open('hello.txt' , encoding='utf-8').readlines()
ls = []
for word in txt:
    ls.append(word)
print(ls)
'''

nls = ['中华人民共和国' , '中国共产党']
f = open('hello.txt' , 'w' , encoding='utf-8')
f.write(' '.join(nls))