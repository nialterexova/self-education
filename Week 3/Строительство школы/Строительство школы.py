#!/usr/bin/env python
# coding: utf-8

# In[182]:


import statistics 
N = int(input())
homes = input()
homes = list(map(int, homes.split()))
s = int(statistics.median(homes))
print(s)


# In[ ]:


N = int(input())
homes = input()
homes = list(map(int, homes.split()))
Sch = list(range(min(homes), max(homes) + 1))

new_list = []
x = 0
while x <= (len(Sch) - 1):
    k = 0
    i = 0
    for h in homes:
        i = abs(Sch[x] - h)
        k = k + i 
    new_list.append(k)
    x = x + 1
print(int(Sch[new_list.index(int(min(new_list)))]))


# In[ ]:




