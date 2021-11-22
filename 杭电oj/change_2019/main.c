#include <stdio.h>

void maopao(int *p, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (*(p+j) > *(p+j+1))
            {
                int t = *(p+j);
                *(p+j) = * (p+j+1);
                *(p+j+1) = t;
            }
        }
    }

}
int main(void)
{
    int n,m;
    while (scanf("%d %d",&n, &m) != EOF)
    {
        if (n == 0 && m == 0)
            break;
        int a[250];
        int * p;
        a[n] = m;
        p = a;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-i; j++)
            {
                if (*(p+j) > *(p+j+1))
                {
                    int t = *(p+j);
                    *(p+j) = * (p+j+1);
                    *(p+j+1) = t;
                }
            }
        }
        for (int i = 0; i < n+1; i++)
        {
            if (i == 0)
                printf("%d",*(p+i));
            else
                printf(" %d",*(p+i));
        }
        printf("\n");
    }
    return 0;
}
