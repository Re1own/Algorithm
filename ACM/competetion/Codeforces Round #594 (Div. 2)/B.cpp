#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

typedef long long ll;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    ll t = (n+1)/2, head = 0, tail = 0, i = 0, j = n-1;
    while(t--) {
        if (j != i) {
            tail += a[j];
            head += a[i];
        }
        else {
            tail += a[j];
            break;
        }
        //else break;
        j--, i++;
    }
    //cout << head << " " << tail << endl;
    cout << head*head + tail*tail << endl;
}