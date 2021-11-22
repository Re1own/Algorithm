#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;

int main(void)
{
    long long int a[65];
    a[1] = 2;
    int n,m,i;
    while(scanf("%d",&n) != EOF)
    {
        for (i = 2; i <= 35; i++)
            a[i] = 3*a[i-1]+2;
        printf("%lld\n",a[n]);
    }

    return 0;
}
