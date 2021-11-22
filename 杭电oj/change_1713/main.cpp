#include <bits/stdc++.h>

using namespace std;

long long gcd(long long m, long long n)
{
    if (m % n == 0)
        return n;
    else
        gcd(n,m%n);
}

long long acc(long long a, long long b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        long long a,b,c,d;
        char w,e;
        cin >> a >> w >> b >> c >> e >> d;
        long long fenzi, fenmu;
        fenmu = b*d;
        a = a*d;
        c = c*b;
        fenzi = acc(a,c);
        long long t1 = fenmu;
        long long t2 = fenzi;
        fenmu = fenmu/gcd(t1,t2);
        fenzi = fenzi/gcd(t1,t2);
        if (fenzi % fenmu == 0)
            cout << fenzi/fenmu << endl;
        else
            cout << fenzi << "/" << fenmu << endl;

    }

    return 0;
}
