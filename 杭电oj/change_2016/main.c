#include <stdio.h>
#include <stdlib.h>
int a[100];
int main(void)
{
    int n;
    while(scanf("%d", &n),n != 0)
    {
        int t = 0;
        int *p;
        p = a;
        int min;
        scanf("%d", p);
        min = * p;
        for (int i = 1; i < n; i++)
        {
            scanf("%d", p+i);
            if ((*(p+i)) < min)
            {
                 min = *(p+i);
                 t = i;
            }
        }
        *p = *(p+t) + *p;
        *(p+t) = *p - *(p+t);
        *p = *p - *(p+t);
        for (int i = 0; i < n-1; i++)
        {
            printf("%d ",*(p+i));
        }
        printf("%d\n",*(p+n-1));
    }
    return 0;
}
