street = list(map(int, input().split()))
flag_left_market = False
flag_right_market = False
len_street = len(street)
houses = [0] * len_street
for i in range(len_street):
    if street[i] == 2:
        flag_left_market = True
        left_market = i
    if street[i] == 1 and flag_left_market:
        distance = i - left_market
        if houses[i] == 0 or houses[i]>distance:
            houses[i]=distance

    index = len_street-1-i
    if street[index] == 2:
        flag_right_market = True
        right_market = index
    if street[index] == 1 and flag_right_market:
        distance = right_market - index
        if houses[index] == 0 or houses[index]>distance:
            houses[index]=distance
print(max(houses))