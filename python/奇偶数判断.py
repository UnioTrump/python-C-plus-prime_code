def isodd(i:int):
    if(i % 2 == 0):
        return False
    else:
        return True
    
def main():
    try:
        keynum = eval(input("请输入一个数字"))
        result = isodd(keynum)
        if result == 1:
            print("该数字是奇数")
        else:
            print("该数字是偶数")
    except NameError:
        print("输入错误，请输入数字。")

if(__name__ == '__main__'):
    main()