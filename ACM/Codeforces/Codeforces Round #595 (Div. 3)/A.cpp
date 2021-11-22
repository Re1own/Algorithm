#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        vector<int> num(n);
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        sort(num.begin(), num.end());
        int cnt = 0;
        for (int i = 1; i < num.size(); i++) {
            if ((num[i] - num[i-1]) == 1) {
                cnt++;
                break;
            }
        }
        if (cnt)    cout << 2 << endl;
        else    cout << 1 << endl;
    }
    return 0;
}