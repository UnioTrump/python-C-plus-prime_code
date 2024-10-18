dayup = 1
N = 0.001
#假设工作日前四天连续工作
#一周内
while(N == 0.1):
    for i in range(365):
        if i % 7 in [1 , 2 , 3 , 4]:
            dayup = dayup * (dayup + N)
        else:
            dayup = dayup * (dayup - N)
    
    print("Conclusion:{:3f}".format(dayup))
    N = N + 0.001