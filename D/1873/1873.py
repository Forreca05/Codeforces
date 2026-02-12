n = int(input())

for _ in range(n):
    length, parte = map(int, input().split())
    s = input()
    parte2 = parte
    cont = 0

    for i in range(length):
        if s[i] == "B":
            if parte2 == parte:
                parte2 -= 1
                cont += 1
            elif parte2 < parte:
                parte2 -= 1
        elif s[i] == "W" and parte2 < parte:
            parte2 -= 1

        if parte2 == 0:
            parte2 = parte

    print(cont)

