#include <stdio.h>
#include <stdlib.h>

int beishu(int * p, int len)
{
    int i = 1,j;
    while(1)
    {
        for (j = 0; j < len; j++)
        {
            if (i % (*(p+j)) != 0)
                break;
        }
        if (j == len)
            return i;
        i++;
    }
}
int main(void)
{
    int n,i;
    int number;
    int a[50];
    int * p;
    p = a;
    while(scanf("%d",&n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d",p+i);
        }
        int h = beishu(p,n);
        printf("%d\n",h);
    }

    return 0;
}
