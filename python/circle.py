import turtle as t
t.penup()
t.goto(0,-100)
t.pendown()
t.pensize(4)
i = 1
for i in range(4):
    t.circle(i * 70)
t.done()
