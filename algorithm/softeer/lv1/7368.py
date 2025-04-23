a, b, d = map(int, input().split())

time = 0
move = 0

while move < d:
	# moving
	for _ in range(a):
		if move < d:
			move += 1
			time += 1
		else:
			break

	# waiting	
	if move < d:
		time += b

while move > 0:
	for _ in range(b):
		if move > 0:
			move -= 1
			time += 1
		else:
			break
	
	if move > 0:
		time +=a

print(time)
