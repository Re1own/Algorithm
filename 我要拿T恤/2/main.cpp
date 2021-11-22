#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

void haha(int n)
{
    int a,b,sum = 0,m = 4,i = 4;
    while(i)
    {
        int j = pow(10,i);
        a = n / j;
        b = n % j;
        i--;
        sum = sum + a*b;
    }
    if (sum == n)   printf("%d ",sum);

}
int main()
{
    for (int i = 10000; i <= 99999; i++)
        haha(i);
    return 0;
}
