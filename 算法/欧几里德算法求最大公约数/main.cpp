#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int gcd(int n, int m)   //gcd��ȫ����greatest common divisor
{
    if (n % m == 0)
        return m;   //����շת����������ͺܺ������
    else
        gcd(m,n%m); //ͨ���ݹ��˼�룬����ÿ�ε�����һ�εĳ�����Ϊ���ڵ��³���m��������Ϊ������n����ojbk����
}
int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);
    gcd(n,m);
    printf("%d",gcd(n,m));
    return 0;
}
