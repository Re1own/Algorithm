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
        if (a % b == 0) printf("YES\n");
        else    printf("NO\n");
    }
    return 0;
}
