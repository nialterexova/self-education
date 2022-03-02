d = int(input())
x,y = map(int, input().split())

if (-x+d)>=y and x>=0 and y>=0:
	print(0)
else:
	if x<=(d/2) and y<=(d/2):
		print(1)
	else:
		if x>=y:
			print(2)
		else:
			print(3)