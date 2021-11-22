#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Year    Amount on deposit\n");
    double p = 1000,r = 0.05,n = 1;
    for (int i = 0; i < 10; i++)
    {
        printf("%4.0lf%21.3lf\n",n,p*pow(1+r,n));
        n++;
    }
    return 0;
}
