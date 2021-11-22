#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int consecutive = n % m;
    int money[n];
    for (int i = 0; i < n; i++) {
        cin >> money[i];
    }
    int ans = 1<<29;
    for (int i = 0; i < n-consecutive; i++) {
        int sum = 0, times = 1;
        for (int j = i; times <= consecutive; times++) {
            sum += money[j+times];
        }
        ans = min(ans, sum);
    }
    cout << ans << endl;
    return 0;
}