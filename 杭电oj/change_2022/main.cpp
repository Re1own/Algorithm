#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int n,m;
    while(cin >> n >> m)
    {
        ll **a = (ll **)malloc(sizeof(ll *)*n);
        for (int i = 0; i < n; i++)
            a[i] = (ll *)malloc(sizeof(ll)*m);
        int x = 0, y = 0;
        ll t;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (i == 0 && j == 0)
                    t = a[i][j];
                if (abs(a[i][j]) > abs(t))
                {
                    x = i;
                    t = a[i][j];
                    y = j;
                }
            }
        }
        printf("%d %d %lld\n",x+1,y+1,t);
    }
    return 0;
}
