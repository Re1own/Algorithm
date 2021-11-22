#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (a%b == 0)   return b;
    else    gcd(b,a%b);
}
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b) != EOF)
    {
        cout << a+b-gcd(a,b) << endl;
    }
    return 0;
}
