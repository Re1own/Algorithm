#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        a %= 100;
        b %= 100;
        printf("%d\n",(a+b)%100);
    }
}
