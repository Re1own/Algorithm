#include <iostream>
#include <cmath>

using namespace std;

int n, flag;
int Hash[4];

void BUFF(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void DFS(int point, int step, char* ans) {
    if (step == n) {
        flag = 1;
        return;
    }
    for (int i = 0; i <= 3; i++) {
        if (abs(point-i) == 1 && Hash[i]) {
            Hash[i]--;
            ans[step+1] = i;
            DFS(i, point+1, ans);
            Hash[i]++;
        }
    }
    return;
}

int main(void) {
    BUFF();
    for (int i = 0; i <= 3; i++) {
        cin >> Hash[i];
        n += Hash[i];
    }
    int ans[n+1];
    for (int i = 0; i <= 3; i++) {
        Hash[i]--;
        ans[1] = i;
        DFS(i, 1, ans);
        Hash[i]++;
        if (flag)	break;
    }
    if (flag)	cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for (int i = 1; i != n; i++) {
            if (i != 1)	cout << " " << ans[i];
            else {
                cout << ans[i];
            }
        }
        cout << endl;
    }
    return 0;
}