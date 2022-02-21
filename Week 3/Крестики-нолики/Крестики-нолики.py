#!/usr/bin/env python
# coding: utf-8

# In[56]:


x = list(map(int, input().split()))
y = list(map(int, input().split()))
z = list(map(int, input().split()))
sum = x + y + z
a = 0
b = 0
for i in sum:
    if i == 1:
        a = a + i
    if i == 2:
        b = b + i

if (a == 0) & (b == 0):
    print('YES')
elif (a == 0) & (b == 2):
    print('NO')
elif ((x[0] == y[0] == z[0] == 1) or (x[1] == y[1] == z[1] == 1) or (x[2] == y[2] == z[2] == 1) or 
    (x[0] == x[1] == x[2] == 1) or (y[0] == y[1] == y[2] == 1) or (z[0] == z[1] == z[2] == 1) or
    (x[0] == y[1] == z[2] == 1) or (x[2] == y[1] == z[0] == 1)) & (a == 3) & (b > 4):
    print('NO')
elif ((x[0] == y[0] == z[0] == 1) or (x[1] == y[1] == z[1] == 1) or (x[2] == y[2] == z[2] == 1) or 
    (x[0] == x[1] == x[2] == 1) or (y[0] == y[1] == y[2] == 1) or (z[0] == z[1] == z[2] == 1) or
    (x[0] == y[1] == z[2] == 1) or (x[2] == y[1] == z[0] == 1)) & (a == 4) & (b > 6):
    print('NO')
elif ((x[0] == y[0] == z[0] == 2) or (x[1] == y[1] == z[1] == 2) or (x[2] == y[2] == z[2] == 2) or 
    (x[0] == x[1] == x[2] == 2) or (y[0] == y[1] == y[2] == 2) or (z[0] == z[1] == z[2] == 2) or
    (x[0] == y[1] == z[2] == 2) or (x[2] == y[1] == z[0] == 2)) & (b == 6) & (a > 3):
    print('NO')
elif ((x[0] == y[0] == z[0] == 2) or (x[1] == y[1] == z[1] == 2) or (x[2] == y[2] == z[2] == 2) or 
    (x[0] == x[1] == x[2] == 2) or (y[0] == y[1] == y[2] == 2) or (z[0] == z[1] == z[2] == 2) or
    (x[0] == y[1] == z[2] == 2) or (x[2] == y[1] == z[0] == 2)) & (b == 8) & (a > 4):
    print('NO')
elif abs(b / 2 - a) > 1:
    print('NO')
else:
    print('YES')

