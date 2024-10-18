Temp = input("Please input tempture with mark:")
if Temp[-1] in ['F' , 'f']:
    C = (eval(Temp[0 : -1]) - 32) / 1.8
    print("TempConvert is {:.2f}C".format(C))
elif Temp[-1] in ['C' , 'c']:
    F = 1.8 * eval(Temp[0 : -1]) + 32
    print("TempConvert is {:.2f}F".format(F))
else:
    print("Error")