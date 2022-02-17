# -*- coding: utf-8 -*-
"""
Created on Thu Feb 17 22:42:26 2022

@author: DenisovaSA
"""

a,b,c= input("введи 3 числа\n").split()
a=int(a)
b=int(b)
c=int(c)
d=c-b-1
e=a-c-1+b
if d<e: print(int(d))
else: print(int(e))
    
    

