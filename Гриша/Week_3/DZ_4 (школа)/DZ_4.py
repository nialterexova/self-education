#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Mar 14 12:58:15 2022

@author: grigorijhamidulin
"""

# ==============================================================================
# _________ Строительство школы
# ==============================================================================

import statistics
import math 

# math.ceil округлить до целого вверх
n = input()
students = list(map(int,input().split(' ')))
print(math.ceil(statistics.median(students)))