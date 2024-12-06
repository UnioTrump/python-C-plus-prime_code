
import jieba

txt = open("红楼梦.txt" , "r" , encoding='utf-8').read()
exclude = {"-----------------------" , "什么" , "那里" , "我们" ,"这里" , "你们" , "说道" , "一个" , "姑娘" , "知道" , "如今"}

words = jieba.lcut(txt)
counts = {}
for word in words:
    if len(word) == 1:
        continue
    elif(word == '老太太'):
        rword = "贾母"
    else:
        rword = word
    counts[rword] = counts.get(rword , 0) + 1
for word in exclude:
    del counts[word]

items = list(counts.items())
items.sort(key=lambda x : x[1] , reverse = True)

for i in range(25):
    word , count = items[i]
    print(f"{word}{count}")