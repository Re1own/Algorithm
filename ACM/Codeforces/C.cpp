#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <vector>

using namespace std;

typedef long long ll;


int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num.begin(), num.end());
    for (int i = n-1; i >= 0; i--) {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}