t = int(input())

for _ in range(t):
    n = int(input())

    if n % 2 == 1:
        ans = [1] * n
    else:
        ans = [1, 3] + [2] * (n - 2)

    print(*ans)