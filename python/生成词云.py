import wordcloud
import jieba

f = open('关于实施乡村振兴战略的意见.txt' , 'r' , encoding='utf-8')
t = f.read()
f.close()

ls = jieba.lcut(t)
txt = " ".join(ls)

c = wordcloud.WordCloud(font_path= 'STXINGKA.TTF', background_color='white' , height=720 , width=1208)
c.generate(txt)
c.to_file("China.png")