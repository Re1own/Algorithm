#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(const ll &a, const ll &b)
{
    return a > b;
}
int main()
{
    ll n,m;
    while(scanf("%lld %lld",&n,&m) != EOF)
    {
        ll *a = (ll *)malloc(sizeof(ll)*n);
        for (ll i = 0; i < n; i++)
            scanf("%lld",a+i);
        sort(a,a+n,cmp);
        for (ll k = 0; k < m; k++)
        {
            if (k == 0)
                printf("%lld",*(a+k));
            else
                printf(" %lld",*(a+k));
        }
        printf("\n");
    }

    return 0;
}
