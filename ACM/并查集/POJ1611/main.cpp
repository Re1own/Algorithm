#include <iostream>
#include <vector>
#include <cstring>
#include <set>
using namespace std;

typedef pair<int,int> pp;
const int maxn = 3e4+5;
int father[maxn];
int hight[maxn];
int sum[maxn];

void init(int N) {
    for (int i = 0; i < N; i++) {
        father[i] = i;
        hight[i] = 0;
        sum[i] = 1;
    }
}

int find_set(int x) {
    if (x != father[x]) father[x] = find_set(father[x]);
    return father[x];
}

void un(int a, int b) {
    int ta = find_set(a);
    int tb = find_set(b);
    if (ta != tb) {
        father[tb] = ta;
        sum[ta] += sum[tb];
    }
}


int main(void) {
    //ios::sync_with_stdio(false);
    int n, m;
    while(cin >> n >> m && !(n == 0 && m == 0)) {
        init(n);
        while (m--) {
            int t, f, tt;
            cin >> t;
            for (int i = 0; i < t; i++) {
                if (i == 0) {
                    cin >> f;
                    continue;
                }
                else {
                    cin >> tt;
                }
                un(f,tt);
            }
        }
        cout << sum[find_set(0)] << endl;
    }
    return 0;
}
