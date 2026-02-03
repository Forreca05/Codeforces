def contas(a, b):
    init = 1
    count = 0
    while a > 0 or b > 0:
        if a - init < 0:
            break
        a -= init
        count += 1
        temp = a
        a = b
        b = temp
        init *= 2
    return count

def main():
    n = int(input())
    for _ in range(n):
        a, b = map(int, input().split())
        op1 = contas(a, b)
        op2 = contas(b, a)
        print(max(op1, op2))

if __name__ == "__main__":
    main()
