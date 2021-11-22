l = [3**i for i in range(0,40)]
s = sum(l)
for i in range(int(input())):
    n = int(input())
    ts = s
    for j in l[::-1]:
        if ts - j >= n:
            ts -= j
    print(ts)
