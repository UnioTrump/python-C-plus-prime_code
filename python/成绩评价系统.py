Chinese= eval(input("语文:"))
Math = eval(input("数学："))
English = eval(input("英语："))
score = Chinese + Math + English
print("总成绩为{}".format(score))

if(score >= 270):
    print("等级为优秀！")
elif(score >= 240 and score < 270):
    print("等级为良好！")
elif(score >= 180 and score< 240):
    print("等级为合格！")
elif(score < 180): 
    print("等级为不合格！")
else:
    print("有误，请重新输入！")