#include <stdio.h>
#include <math.h>

int main(void)
{
    double p = 1000.00,r = 0.05,a;
    int n = 1;
    printf("Year    Amount on deposit\n");
    for (int i = 0; i < 10; i++)
    {
        a = p * pow((1+r),n);
        printf("%4d",n);
        printf("%21.3lf\n",a);
        n++;
    }

    return 0;
}
