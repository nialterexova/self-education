inp=input().split(' ')
if int(inp[1])<int(inp[2]):
    if int(inp[2])-int(inp[1])-1>int(inp[0])-int(inp[2])+int(inp[1])-1:
        print(abs(int(inp[0])-int(inp[2])+int(inp[1])-1))
    else:
        print(abs(int(inp[2])-int(inp[1])-1))
else:
    if int(inp[1]) - int(inp[2]) - 1> int(inp[0]) - int(inp[1])+int(inp[2])-1:
        print(abs(int(inp[0]) - int(inp[1])+int(inp[2])-1))
    else:
        print(abs(int(inp[1]) - int(inp[2]) - 1))
# *** Старый код
# inp=input().split(' ')
x=0
while x!=1:
    try:
        inp[0], inp[1], inp[2]=int(inp[0]), int(inp[1]), int(inp[2])
        if len(inp)==3 and 0< inp[0] < 101 and inp[1] > 0 \
                and inp[2] > 0 and inp[1]!=inp[2] and inp[0]>=inp[1] and inp[0]>=inp[2]:
            x=1
            st=list(range(1, inp[0]+1))
            if inp[2] > inp[1]:
                if inp[2] - inp[1]> inp[0] // 2:
                    print(inp[0]-inp[2]+inp[1]-1)
                else:
                    print(inp[2]-inp[1]-1)
            elif inp[2] < inp[1]:
                if inp[1]-inp[2]>inp[0]//2:
                    print(inp[0]-inp[1]+inp[2]-1)
                else:
                    print(inp[1]-inp[2]-1)
        else:
            inp = input('\nВведите коректное количество станций,\nпосадочную станцию и конечную(Через пробел): ').split(' ')
    except:
        inp = input('\nВведите коректное количество станций,\nпосадочную станцию и конечную(Через пробел): ').split(' ')
