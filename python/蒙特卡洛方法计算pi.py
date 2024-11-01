from random import *
from time import perf_counter

p = eval(input("输入精度"))
in_area = 0
start = perf_counter()
for i in range(1 , p + 1):
    x , y = uniform(0 , 1) , uniform(0 , 1)
    if((x**2 + y**2) <= 1):
        in_area += 1
pi = 4 * (in_area / p)
end = perf_counter()
dure = end - start
print("圆周率是{}".format(pi))
print("程序用时{:.5f}s".format(dure))