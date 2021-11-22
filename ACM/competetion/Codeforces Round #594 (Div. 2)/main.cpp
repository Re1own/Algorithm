#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

typedef long long ll;
const int mod = 1e9 + 7;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, m;
    cin >> n >> m;
    cout << pow(n,m)%mod << endl;
}