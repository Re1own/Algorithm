#include <bits/stdc++.h>

using namespace std;

int gcd(int n, int m)
{
    if (n % m == 0) return m;
    else    gcd(m,n%m);
}
int main()
{
    int n,m;
    while (scanf("%d %d",&n,&m) != EOF)
    {
        cout << (n*m)/gcd(n,m) << endl;
    }

}
