#include <bits/stdc++.h>

using namespace std;

const int mod = 7;

int fibo(int n, int a, int b)
{
    if (n == 1) return 1;
    else if (n == 2)    return 1;
    else    return (a*fibo(n-1,a,b) + b*fibo(n-2,a,b))%mod;

}
int main(void)
{
    int a,b,n;
    while(scanf("%d %d %d",&a,&b,&n) != EOF && a != 0 && b != 0 && n != 0)
    {
        if (a == b && b == n && b == 0) break;
        printf("%d\n",fibo(n%49,a,b));
    }
    return 0;
}
