#include <iostream>

using namespace std;

const int maxn = 1e6+5;
int father[maxn];
int height[maxn];

void init(void) {
    for (int i = 0; i < maxn; i++) {
        father[i] = i;
        height[i] = 0;
    }
}
int find_father(int num) {
    if (num != father[num]) {
        father[num] = find_father(father[num]);
    }
    else {
        return num;
    }
}

void Union(int x, int y) {
    int tx = find_father(x), ty = find_father(y);
    if (father[tx] != father[ty]) {
        if (height[tx] == height[ty]) {
            father[ty] = father[tx];
            height[tx]++;
        }
        else if (height[tx] > height[ty]) {
            //height[ty] = height[tx];
            father[ty] = father[tx];
        }
        else {
            //height[tx] = height[ty];
            father[tx] = father[ty];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int n, m;
        init();
        cin >> n >> m;
        int a[n], flag = 0;
        while(m--) {
            int x, y;
            cin >> x >> y;
            if (father[find_father(x)] == father[find_father(y)]) {
                flag = 1;
            }
            Union(x, y);
        }
        cout << "Scenario #" << i+1 << ":" << endl;
        if (flag) {
            cout << "Suspicious bugs found!\n" << endl;
        }
        else {
            cout << "No suspicious bugs found!\n" << endl;
        }
    }
    return 0;
}