for i in range(1 , 100):
    for p in range(1 , 100):
        m = 100 - i - p
        money = 5 * i + 3 * p + m * (1 / 3)
        if(money == 100):
            print("公鸡{}只，母鸡{}只，小鸡{}只。".format(i , p , m))