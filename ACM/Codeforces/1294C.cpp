#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

typedef long long ll;

const ll maxn = 1e9 + 5;

int judge_prime(ll num) {
    for (ll i = 2; i*i <= num; i++) {
        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        ll n;
        cin >> n;
        if (judge_prime(n)) {
            cout << "NO" << endl;
            continue;
        }
        set<ll> ans;
        for (ll i = 2; i*i <= n; i++) {
            if (n % i == 0) {
                ans.insert(i);
                n /= i;
                break;
            }
        }
        for (ll i = 2; i*i <= n; i++) {
            if (n % i == 0 && !ans.count(i)) {
                ans.insert(i);
                n /= i;
                break;
            }
        }
        if (ans.size() < 2 || n == 1 || ans.count(n)) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            ans.insert(n);
            for (auto i : ans) {
                cout << i << " ";
            }
            cout << endl;
        }

    }

    return 0;
}