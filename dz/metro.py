# -*- coding: utf-8 -*-
"""
Created on Wed Feb 16 21:56:47 2022

@author: NikitinAY
"""

N,i,j=map(int,input().split())
if i!=j and i>0 and j>0 and N<101 and N>0:
    if i>j:
        if (N-i+j-1) > (i-j-1):
            print(i-j-1)
        else:
            print(N-i+j-1)
    else:    
        if (N-j+i) > (j-i-1):
            print(j-i-1)
        else:
            print(N-j+i-1)
else:
    print('Error')