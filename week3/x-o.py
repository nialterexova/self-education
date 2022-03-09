array = []
cross = 0
zero = 0
size = 3
cross_win = False
zero_win = False
for i in range(size):
    row = list(map(int, input().split()))
    array.append(row)
    cross += row.count(1)
    zero += row.count(2)

difference = cross-zero
if (difference not in [0, 1]):
    print("NO")
else:
    if cross<size:
        print("YES")
    else:
        cross_sum_diag = [0, 0]
        zero_sum_diag = [0, 0]
        for i in range(size):
            cross_sum = [0, 0]
            zero_sum = [0, 0]
            for j in range(size):
                cross_sum[0] += 1 if array[i][j] == 1 else 0
                zero_sum[0] += 1 if array[i][j] == 2 else 0
                cross_sum[1] += 1 if array[j][i] == 1 else 0
                zero_sum[1] += 1 if array[j][i] == 2 else 0
            if cross_sum.count(size) > 0:
                cross_win = True
            if zero_sum.count(size) > 0:
                zero_win = True
            cross_sum_diag[0] += 1 if array[i][i] == 1 else 0
            zero_sum_diag[0] += 1 if array[i][i] == 2 else 0
            cross_sum_diag[1] += 1 if array[i][size-1-i] == 1 else 0
            zero_sum_diag[1] += 1 if array[i][size-1-i] == 2 else 0
        if cross_sum_diag.count(size) > 0:
            cross_win = True
        if zero_sum_diag.count(size):
            zero_win = True

        if (cross_win and difference != 1) or (zero_win and difference != 0) or (cross_win and zero_win):
            print("NO")
        else:
            print("YES")