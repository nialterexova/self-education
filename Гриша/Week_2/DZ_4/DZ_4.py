#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Feb 11 16:06:47 2022

@author: grigorijhamidulin
"""


# ==============================================================================
# _________ Задание _ 4
# ==============================================================================
import numpy as np

while True:
    try:
        n = int(input('Введи общее число станций (целое, не нулевое, не отрицательное, не дробное): \n'))
        if n > 0:
            break
    except ValueError:
        print ('Введи целое число')
    
while True:
    try:
        a = int(input('Введи номер первой станции (целое, не нулевое, не отрицательное, не дробное и не больше общего количества станций - ' + str(n) + '\n'))
        if a <= n and a > 0:
            break
    except ValueError:
        print ('Введи целое число')
        
while True:
    try:
        b = int(input('Введи номер второй станции (целое, не нулевое, не отрицательное, не дробное и не больше общего количества станций - ' + str(n) + '\n'))
        if b <= n and b > 0:
            break
    except ValueError:
        print ('Введи целое число')


# ========= решение_1
if a > b:
    res_1 = a - b - 1
    res_2 = n - res_1 - 2
if a < b:
    res_1 = b - a - 1
    res_2 = n - res_1 - 2
if a == b:
    res_1 = 0
    res_2 = n - 1
    



print('Всего станций: ', n)
print('Станции располагались: ', str(a) + ' и ' + str(b))
print('Между станцией a и b по прямой: ', str(res_1))
print('Между станцией a и b в обратку: ', str(res_2))


# ========= решение_2
if a > b:
    res_1 = a - b - 1
    res_2_1 = n - a
    res_2 = b + res_2_1 - 1
if a < b:
    res_1 = b - a - 1
    res_2_1 = n - b
    res_2 = a + res_2_1 - 1
if a == b:
    res_1 = 0
    res_2 = n - 1
    
print('Всего станций: ', n)
print('Станции располагались: ', str(a) + ' и ' + str(b))
print('Между станцией a и b по прямой: ', str(res_1))
print('Между станцией a и b в обратку: ', str(res_2))





