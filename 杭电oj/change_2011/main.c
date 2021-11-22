#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void haha(double x)
{
    double sum = 0,y;
    for (double i = 1; i <= x; i++)
    {
        y = pow(-1,i+1);
        y = y*(1.0/i);
        sum += y;
    }
    printf("%.2lf\n",sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        double m;
        scanf("%lf", &m);
        haha(m);
    }
    return 0;
}
//È«²¿ÓÃdouble!!!!!!
