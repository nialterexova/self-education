#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Mar 14 12:51:02 2022

@author: grigorijhamidulin
"""
# ==============================================================================
# _________ Кольцевая_линия_метро
# ==============================================================================

n,a,b =  map(int,input().split())

if a < b:
   c = a + abs(b - n) - 1
else:
  c = b + abs(a - n) - 1

d = abs(a - b) - 1
if(c < d):
    print(c)
else:
     print(d)
     
     
""" альтернативный метод
n,a,b =  map(int,input().split())

#opt_1 = abs(int(a) - int(b)) - 1
#opt_2 = abs(int(n) - opt_1) -1

if a > b:
    res_1 = a - b - 1
    res_2 = n - res_1 - 2
if a < b:
    res_1 = b - a - 1
    res_2 = n - res_1 - 2
if a == b:
    res_1 = 0
    res_2 = n - 1
    

res = int(min(res_1,res_2))
print(res)
"""


