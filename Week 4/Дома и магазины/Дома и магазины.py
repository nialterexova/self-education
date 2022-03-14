#!/usr/bin/env python
# coding: utf-8

# In[32]:


# 0 - офис
# 1 - дом
# 2 - магазин
buildings = list(map(int, input().split()))
homes = []
shops = []
pos = -1
for i in buildings:
    if i == 1:
        pos += 1
        homes.append(pos)
    elif i == 2:
        pos += 1
        shops.append(pos)
    else:
        pos += 1

max_s = []
for i in homes:
    distance = []
    for j in shops:
        s = abs(j - i)
        distance.append(s)
    max_s.append(min(distance))

print(max(max_s))


# In[ ]:




