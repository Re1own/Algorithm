#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
bool prime[1000000];
void Is_primes(int n)
{
    prime[0] = false;
    prime[1] = false;   //0��1��������ֱ���ų�
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(prime[i] == true)
            for(int j = i*i; j <= n; j += i)    //Ϊʲô��j=i*i������j=i*2?��Ϊ��j = 2*3��j = 3*2ʱ�ͻ��ظ��޳������ֱ��j=i*i���Ӷȸ�С��
                prime[j] = false;
    }
}
int main(void)
{
    int n,ok = 0;
    scanf("%d",&n);
    memset(prime,true,sizeof(prime));   //��������г�ʼ����
    Is_primes(n);
    for (int i = 2; i <= n; i++)
        if (prime[i] == true)   ok++;
    printf("%d",ok);
    return 0;
}
