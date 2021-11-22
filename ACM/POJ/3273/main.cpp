#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ok(int n, int m, vector<int>& a, int max) {
    int i = 0, t = 0;
    while(i < n) {
        int s = 0;
        while(s + a[i] <= max && i < n) {
            i++;
            s += a[i];
        }
        t++;
    }
    if (t > m) {
        return false;
    }
    else {
        return true;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    while(cin >> n >> m) {
        vector<int> num(n);
        int low = 0, high = 0;
        for (int i = 0; i < n; i++) {
            cin >> num[i];
            high += num[i];
        }
        low = *max_element(num.begin(), num.end());
        int mid = (low + high)/2;
        while (low < high) {
            if (ok(n, m, num, mid)) {
                high = mid-1;
            } else {
                low = mid + 1;
            }
            mid = (low + high) / 2;
        }
        cout << mid << endl;
    }
    return 0;
}
