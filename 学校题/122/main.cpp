#include <stdio.h>
#include <math.h>


int main()
{
    int k = 4,sign;
    double sum = 0,a = 1.0;
    for (int i = 1; i <= 1000000; i++)
    {
        sign = pow(-1,i-1);
        a = (1.0 / (2.0*i - 1.0))*sign;
        sum += a;
    }
    printf("%.5lf",sum * 4);
    return 0;
}
