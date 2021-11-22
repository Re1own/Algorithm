#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll gcd(ll a, ll b)
{
    while(a ^= b ^= a ^= b %= a);
    return b;
}
int main(void)
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        ll a = 0,b = 1,c = 0,d = 0;
        int flag = 0;
        for (int i = 2; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == ')')
            {
                flag = 1;
            }
            if (s[i] >= '0' && s[i] <= '9' && flag == 0)
            {
                a = a*10+s[i]-'0';
                b = 10*b;
            }
            else if (flag == 1 && s[i] >= '0' && s[i] <= '9')
            {
                c = c*10+s[i]-'0';
                d = d*10+9;
            }
        }
        d = d*b;
        ll fenmu = b*d;
        ll fenzi = a*d+c*b;
        //cout << a << " " << b << " " << c << " " << d;
        if (flag == 0)
            cout << a/gcd(a,b) << "/" << b/gcd(a,b) << endl;
        else
            cout << fenzi/gcd(fenzi,fenmu) << "/" << fenmu/gcd(fenzi,fenmu) << endl;
    }
    return 0;
}
