try:
    d = int(input())
    x = input().split()
    x[0],x[1]= int(x[0]), int(x[1])
    # отрицательные значение
    if x[0] < 0 and x[1] <= d//2:
        print(1)
    elif x[0] < 0 and x[1] > d//2:
        print(3)
    #     нулевые значения
    elif x[0]==0 and x[1]<=d//2:
        if x[1]>=0:
            print(0)
        else:
            print(1)
    elif x[0]==0 and x[1]>d//2:
        if x[1]<=d:
            print(0)
        else:
            print(3)
    elif x[1] < 0:
        if x[0]<=d//2:
            print(1)
        else:
            print(2)
     # положительные значения внутри
    elif 0 < x[0]+x[1] <= d:
        print(0)
    elif x[0]+x[1] > d and x[0] < x[1]:
        print(3)
    elif x[0]+x[1] > d and x[0] >= x[1]:
        print(2)
    else:
        print('что за хуйня должна произойти, что ты сюда попал?')
except:
    print('Ошибка ввода данных')