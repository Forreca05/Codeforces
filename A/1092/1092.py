n = int(input())
letters = "abcdefghijklmnopqrstuvwxyz"

for _ in range(n):
    l, t = map(int, input().split())
    nova = letters[:t]   # equivalente a substr(0, t)
    
    final = ""
    rep = 0
    
    for _ in range(l):
        if rep == t:
            rep = 0
        final += nova[rep]
        rep += 1
    
    print(final)
