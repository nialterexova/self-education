# -*- coding: utf-8 -*-
"""
Created on Sat Feb 19 23:29:07 2022

@author: NikitinAY
"""

N=int(input())
if N>0 and N<100001:
    y=input().split()   
    x=N//2
    y=y[x]
print(y)