#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

typedef long long ll;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll q;
    cin >> q;
    while(q--) {
        ll n, m, oddn = 0, oddm = 0, evenn = 0, evenm = 0;
        set<ll> a, b, c, d;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            ll t;
            cin >> t;
            if (t%2 == 0)   a.insert(t);
            else    b.insert(t);
        }
        cin >> m;
        for (ll i = 0; i < m; i++) {
            ll t;
            cin >> t;
            if (t%2 == 0)   c.insert(t);
            else    d.insert(t);
        }
        evenm = a.size(), evenn = c.size(), oddm = b.size(), oddn = d.size();
        cout << evenm*evenn + oddn*oddm << endl;
    }
}