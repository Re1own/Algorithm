#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
bool prime[1000000];
void Is_primes(int n)
{
    prime[0] = false;
    prime[1] = false;   //0与1是素数，直接排除
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(prime[i] == true)
            for(int j = i*i; j <= n; j += i)    //为什么是j=i*i而不是j=i*2?因为如j = 2*3与j = 3*2时就会重复剔除，因此直接j=i*i复杂度更小！
                prime[j] = false;
    }
}
int main(void)
{
    int n,ok = 0;
    scanf("%d",&n);
    memset(prime,true,sizeof(prime));   //对数组进行初始化！
    Is_primes(n);
    for (int i = 2; i <= n; i++)
        if (prime[i] == true)   ok++;
    printf("%d",ok);
    return 0;
}
