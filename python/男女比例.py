import random

times = eval(input("请输入家庭数："))
boy , girl = 1 , 0
boy_num = 0
girl_num = 0

for i in range(times):
    new_birth = random.randint(0 , 1)
    while(new_birth == girl):      #不生男孩
        girl_num += 1
        new_birth = random.randint(0 , 1)
    boy_num += 1

p = boy_num / girl_num
print("男女比例为{:.4f}".format(p))