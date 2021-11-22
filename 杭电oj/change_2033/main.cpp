#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a[3], b[3], c[3];
        for (int i = 0; i < 3; i++)
            cin >> a[i];
        for (int i = 0; i < 3; i++)
            cin >> b[i];
        c[0] = a[0] + b[0];
        c[1] = a[1] + b[1];
        c[2] = a[2] + b[2];
        c[1] += c[2]/60;
        c[2] %= 60;
        c[0] += c[1]/60;
        c[1] %= 60;
        printf("%d %d %d\n",c[0],c[1],c[2]);
    }
    return 0;
}
