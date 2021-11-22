#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (a%b == 0)
        return b;
    else
        gcd(b,a%b);
}
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a,c;
        cin >> a >> c;
        for (int b = c+1; b <= a; b++)
            if (gcd(a,b) == c)
            {
                cout << b << endl;
                break;
            }
    }
    return 0;
}
