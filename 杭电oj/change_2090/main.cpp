#include<iostream>
#include<cstdio>
using namespace std;


char name[100];
int main(void)
{
    double a,b,sum;
    sum = 0;
    while(cin>>name>>a>>b)
    {
        sum += a*b;
    }
    printf("%.1lf\n",sum);
    return 0;
}
