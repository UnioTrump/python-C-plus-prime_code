import random

times = eval(input("输入次数"))
first_choice_success = 0
change_choice_success = 0

for i in range(times):
    car_door = random.randint(0 , 2)
    guess = random.randint(0 , 2)
    if(guess == car_door):
        first_choice_success += 1
    else:
        change_choice_success += 1
p1 = first_choice_success / times
p2 = change_choice_success / times
print("不改变选择正确的概率是{0:.4f},改变选择正确的概率是{1:.4f}".format(p1 , p2))