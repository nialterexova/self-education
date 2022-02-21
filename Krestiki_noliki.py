one=[]
one.append([int(x) for x in input().split()])
one.append([int(x) for x in input().split()])
one.append([int(x) for x in input().split()])
sum1, sum1_1, sum2, sum2_2=0, 0, 0, 0
r=[]
for i in range(3):
    for j in range(3):
        if one[i][j]==1:
            sum1+=1
        elif one[i][j] == 2:
            sum2+=1
        elif one[i][j] == 0:
            one[i][j] = 10
    r.append(sum(one[i]))
#
for i in range(3):
    for j in range(3):
        sum1_1 += one[j][i]
    r.append(sum1_1)
    sum1_1=0
for i in range(3):
    sum1_1 += one[i][i]
r.append(sum1_1)
sum1_1 = 0
j=0
for i in range(2, -1, -1):
    sum1_1 += one[i][j]
    j+=1
r.append(sum1_1)
sum1_1 = 0
k=0
n=0
for i in r:
    if i==3:
        sum2_2+=1
        k+=1
    elif i==6:
        sum2_2 += 1
        n += 1
if sum2_2 == 1:
    sumi = sum1 - sum2
    if sumi==1:
        if n==1:
            print('NO')
        elif k == 1:
            print('YES')
    elif sumi == 0:
        if n==1:
            print('YES')
        elif k==1:
            print('NO')
    else:
        print('NO')
elif sum2_2 == 0:
    sumi = sum1 - sum2
    if sumi == 1 or sumi == 0:
        print('YES')
    else:
        print('NO')
else:
    print('NO')
print(r, n, k)