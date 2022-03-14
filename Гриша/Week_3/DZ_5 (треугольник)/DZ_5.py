#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Mar 14 12:59:43 2022

@author: grigorijhamidulin
"""

# ==============================================================================
# _________ треугольник
# ==============================================================================
d = int(input()) # 

X = list(map(int,input().split())) # задаем точку которая лежит в какоето координате

#  нулевая вершина
x1=0
y1=0

#  вершина 1
x2=d
y2=0

#  вершина 2
x3=0
y3=d

#  наша введенная точка
x0=X[0]
y0=X[1]

values = [(x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0),
(x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0),
(x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0)]

if all(item > 0 for item in values):  #  all отвечает за то, что все элементы в списке соблюдают условие True из цикла
    print(0)
elif any(x==0 for x in values): #  any хотя бы один элемент из списка удовлетворит условию тру
    print(0)
else:
    nn=[sum(([(b1-b2)**2 for b1,b2 in zip([x1,y1],[x0,y0])]))**(1/2),
    sum(([(b1-b2)**2 for b1,b2 in zip([x2,y2],[x0,y0])]))**(1/2),
    sum(([(b1-b2)**2 for b1,b2 in zip([x3,y3],[x0,y0])]))**(1/2)]
    
    print(nn.index(min(nn))+1)