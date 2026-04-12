n = int(input())

for _ in range(n):
	a = int(input())
	total = 0

	while a > 0:
		total += a
		a //= 2

	print(total)
