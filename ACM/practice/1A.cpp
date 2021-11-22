#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, m, a;
    cin >> n >> m >> a;
    cout << (n/a + (n%a == 0 ? 0 : 1)) * (m/a + (m%a == 0? 0 : 1));
    return 0;
}