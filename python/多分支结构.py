#猜数游戏
from random import *

keynum = randint(1 , 101)
i=1

num = eval(input("请输入一个1~100的整数"))
while(type(num) != int):
    num = eval(input("请输入一个1~100的整数"))

while(num != keynum):
    num = eval(input("请输入一个1~100的整数"))
    while(type(num) != int):
        num = eval(input("请输入一个1~100的整数"))
    if(num > keynum):
        print("遗憾，太大了")
    else:
        print("遗憾，太小了")
        
    i += 1
print("预测{}次，你猜中了！".format(i))