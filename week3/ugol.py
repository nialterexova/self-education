# -*- coding: utf-8 -*-
"""
Created on Sun Feb 20 12:33:27 2022

@author: NikitinAY
"""

d=int(input())
x1,x2=map(int,input().split())
if (x1<d and x2>d)  or (x1<0 and x2>=(d//2+1))  or (x1>d and x2>d)  or (x2>(d//2) and x2>x1 and (x1+x2>d) and x2<d) :
    print(3)
elif (x1<0 and x2<0) or (x1<0 and x2<d) or (x2<0 and x1<(d//2+1)) or (x1==0 and x2<0):
    print(1)
elif (x1>=d and x2>0) or (x1>=(d//2) and x2>x1) or (x2<0 and x1<d) or (x1<=d and x2<0) or ((x1>d//2) and x1==x2) or (x1>d and x2==0) or (x1>(d//2) and x2<x1 and (x1+x2>d)) or (x1>d and x2<0):
    print(2)
else:
    print(0)