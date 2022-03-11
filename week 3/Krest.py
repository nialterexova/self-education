/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import sys
a=3
mas = [] 
for i in range(a): 
    mas.append(list(map(int, input().split())))

count1 = 0
count2 = 0

is_stroca1 = False
is_stroca2 = False
is_stolbec1 = False
is_stolbec2 = False

is_dig1 = False
is_dig2 = False
is_fdig1 = False
is_fdig2 = False

for i in range(0, len(mas)):
    
    if mas[i][0] == mas[i][1] == mas[i][2] != 0 :
        if mas[i][0] == 1:
            is_stolbec1 = True
        elif mas[i][0] == 2:
            is_stolbec2 = True
    if mas[0][i] == mas[1][i] == mas[2][i] != 0 :
        if mas[0][i] == 1:
            is_stroca1 = True
        elif mas[0][i] == 2:
            is_stroca2 = True
    
    for j in range(0, len(mas[i])):
        if (mas[i][j] == 1):
            count1 +=1
        elif (mas[i][j] == 2):
            count2 +=1

if mas[1][1] == mas[0][0] == mas[2][2] != 0:
    if mas[0][0] == 1:
        is_dig1 = True
    elif mas[0][0] == 2:
        is_dig2 = True
if mas[0][2] == mas[1][1] == mas[2][0] != 0:
    if mas[0][2] == 1:
        is_fdig1 = True
    elif mas[0][2] == 2:
        is_fdig2 = True

if (is_stroca1 == False and is_stolbec1 == False and is_dig1 == False and is_fdig1 == False and is_stroca2 == False and is_stolbec2 == False and is_dig2 == False and is_fdig2 == False):
    if count1-1 == count2:
        print("YES")
        sys.exit()
    elif count1 == count2:
        print("YES")
        sys.exit()
    
if (is_stroca1 == True or is_stolbec1 == True or is_dig1 == True or is_fdig1 == True) and not(is_stroca2 == True or is_stolbec2 == True or is_dig2 == True or is_fdig2 == True):
    if count1 - 1 == count2:
        print("YES")
        sys.exit()

    
if (is_stroca2 == True or is_stolbec2 == True or is_dig2 == True or is_fdig2 == True) and not(is_stroca1 == True or is_stolbec1 == True or is_dig1 == True or is_fdig1 == True):
    if count1 == count2:
        print("YES")
        sys.exit()

print("NO")
