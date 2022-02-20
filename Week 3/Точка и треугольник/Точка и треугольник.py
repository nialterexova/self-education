#!/usr/bin/env python
# coding: utf-8

# In[18]:


d = int(input())
x, y = map(int, input().split()) 

# В треугольнике
if (x >= 0) & (y >= 0) & (x <= d) & (y <= d) & ((x + y) <= d):
    print(0)
# Оба отрицательных, III четверть 
elif (x < 0) & (y < 0):
    print(1)
# II четверть, до середины d по вертикали     
elif (x < 0) & (0 < y <= (d / 2)):
    print(1)
# II четверть, выше середины d по вертикали  
elif (x < 0) & ((d / 2) < y):
    print(3)
# IV четверть, до середины d по горизонтали
elif (y < 0) & (0 < x <= (d / 2)):
    print(1)
# IV четверть, дальше середины d по горизонтали
elif (y < 0) & ((d / 2) < x):
    print(2)
# I четверть
elif y > x:
    print(3)
else:
    print(2)


# In[ ]:




