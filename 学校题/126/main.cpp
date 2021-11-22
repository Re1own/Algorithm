#include <stdio.h>
#include <math.h>

int haha(double r)
{
    double p = 1000,n,a;
    double sum;
    printf("Year    Amount on deposit\n");
    for (n = 1; n <= 10; n++)
    {
        printf("%4.0lf",n);
        a = pow((1+r),n)*p;
        printf("%21.3lf\n",a);

    }
}
int main(void)
{
    for (double i = 0.05; i <= 0.1; i += 0.01)
    {
        printf("\nInterest Rate: %lf\n",i);
        haha(i);
    }

    return 0;
}

