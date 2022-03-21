mas=input().split(' ')
out=[]
for i in range(len(mas)):
    promez = []
    if mas[i]=='1':
        for j in range(len(mas)):
            if mas[j]=='2':
                promez.append(abs(j-i))
        out.append(min(promez))
print(max(out))