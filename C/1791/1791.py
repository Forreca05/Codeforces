n = int(input())

for _ in range(n):
    length = int(input())
    s = input().strip()

    while len(s) > 1 and s[0] != s[-1]:
        s = s[1:-1]
    print(len(s))

