#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int gcd(int n, int m)   //gcd的全称是greatest common divisor
{
    if (n % m == 0)
        return m;   //理解好辗转相除法后代码就很好理解了
    else
        gcd(m,n%m); //通过递归的思想，我们每次调用上一次的除数作为现在的新除数m，余数作为被除数n，就ojbk啦！
}
int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);
    gcd(n,m);
    printf("%d",gcd(n,m));
    return 0;
}
