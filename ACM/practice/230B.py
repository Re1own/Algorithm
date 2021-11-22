n = int(input())
maxn = 10**6+1
p = [1]*(maxn+1)
ans = {4}

for i in range(2, maxn+1):
    if p[i] == 1:
        for j in range(i*i, maxn+1, i):
            p[j] = 0
        ans.add(i*i)

for d in map(int, input().split()):
    if d in ans:
        print('YES')
    else:
        print('NO')
    
