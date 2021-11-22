#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 5e4+5;

int father[maxn];
int point[maxn];
int N, K, cnt = 0;

void init(int n) {
    for (int i = 1; i <= n; i++) {
        father[i] = i;
        point[i] = 0;
    }
}

int find_fa(int x, int k) {
    if (x == father[x]) return x;
    int t = father[x];
    father[x] = find_fa(father[x], k);
    point[x] = (point[x] + point[t])%3;
    return father[x];
}

void _union1(int a, int b, int k) {    //use it to find the same kind
    int fa = find_fa(a, k);
    int fb = find_fa(b, k);
    father[fb] = fa;
    point[fb] = (point[a] - point[b] + 3 + k-1)%3;
}



int main(void) {
    //ios::sync_with_stdio(false);
    scanf("%d %d", &N, &K);
    init(N);
    while(K--) {
        int k, a, b;
        scanf("%d %d %d", &k, &a, &b);
        if (k == 2 && a == b)   cnt++;
        else if (a > N || b > N)    cnt++;
        else {
            if (find_fa(a, k) == find_fa(b, k)) {
                if (k == 1 && point[a] != point[b])   cnt++;
                else if (k == 2 && (point[a]+1)%3 != point[b])   cnt++;
            }
            else {
                _union1(a, b, k);
            }
        }
        //cout << cnt << "  " << k << " " << a << " " << b << endl;
    }
    printf("%d\n", cnt);
    return 0;
}
