#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int maxn = 2e4+5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        vector<int> num(n), ans(n), book(n);
        for (int i = 0; i < n; i++) {
            cin >> num[i];
            num[i]--;
            book[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            vector<int> tnumber;
            int cnt = 1;
            if (book[i] == 0) {
                tnumber.emplace_back(i);
                while(num[i] != i) {
                    book[num[i]] = 1;
                    tnumber.emplace_back(num[i]);
                    num[i] = num[num[i]];
                    cnt++;
                }
                for (auto j : tnumber) {
                    ans[j] = cnt;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}