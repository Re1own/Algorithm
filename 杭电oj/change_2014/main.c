#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maopao(int * p,int n)
{
    int t;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if ( *(p+j) > *(p+j+1))
            {
                t = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = t;
            }
        }
    }
        double average;
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            printf("%d ",*(p+i));
            sum = sum + *(p+i);
        }
        sum = sum - *p - *(p+n-1);
        average = sum / (n - 2);
        printf("%.2lf\n",average);
}
int main(void)
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        int a[n];
        int * p;
        p = a;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",p + i);
        }
        maopao(p,n);
    }
    return 0;
}
