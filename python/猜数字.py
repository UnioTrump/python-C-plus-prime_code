#猜数游戏
from random import *

keynum = randint(1 , 101)
i=1

while(True):
    try:
        num = eval(input("请输入一个1~100的整数"))

        if(num > keynum):
            print("遗憾，太大了")
        elif(num < keynum):
            print("遗憾，太小了")
        else:
            print("预测{}次，你猜中了！".format(i))
        i += 1
    except NameError:
        print("请输入一个1~100的整数")