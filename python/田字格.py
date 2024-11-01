def ln1():
    print(a)
def ln2():
    print(b)
def TIAN(num):
    for j in range(num):
        ln1()
        for i in range(2):
            ln2()
    ln1()

num = eval(input("输入行数和列数"))
a = '+'+('-' * 6 + '+') * (num)
b = ('|' + ' ' * 6) * num + '|'
TIAN(num)