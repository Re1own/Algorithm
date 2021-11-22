#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


ll gcd(ll a, ll b)
{
    while(a ^= b ^= a ^= b %= a);
    return b;
}
ll lcm(ll a, ll b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int m;
        cin >> m;
        int t1,t2,t;
        for (int i = 0; i < m; ++i)
        {
            if (i == 0)
            {
                cin >> t;
                t1 = t;
                continue;
            }
            cin >> t2;
            t1 = lcm(t1,t2);
        }
        cout << t1 << endl;
    }
    return 0;
}
