import jieba
txt = open("三国演义.txt" , "r" , encoding='utf-8').read()
exclude = {"将军" , "却说" , "二人" , "不可" , "荆州" , "不能" , "如此" , "商议" , "如何"}
words = jieba.lcut(txt)

counts = {}
for word in words:
    if(len(word) == 1):
        continue
    elif(word == "孟德" or word == "丞相"):
        rword = "曹操"
    elif(word == '诸葛亮' or word == '孔明曰'):
        rword = "孔明"
    elif(word == "玄德" or word == "玄德曰"):
        rword = '刘备'
    elif(word == '关公' or word == '云长'):
        rword = '关羽'
    else:
        rword = word
    counts[rword] = counts.get(rword , 0) + 1
for word in exclude:
    del counts[word]
items = list(counts.items())

items.sort(key=lambda x:x[1] , reverse = True)
for i in range(15):
    word , count = items[i]
    print(f"{word :<10}{count:>5}")