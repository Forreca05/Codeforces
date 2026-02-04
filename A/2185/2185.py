t = int(input())

for _ in range(t):
    a = int(input())
    init = 2
    out = []
    for i in range(a):
        out.append(str(init))
        init += 1
    print(" ".join(out))

