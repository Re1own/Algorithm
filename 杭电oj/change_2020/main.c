#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    while(scanf("%d", &n), n != 0)
    {
        int a[250];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n-1-i; j++)
            {
                if (abs(a[j]) < abs(a[j+1]))
                {
                    a[j] = a[j] + a[j+1];
                    a[j+1] = a[j] - a[j+1];
                    a[j] = a[j] - a[j+1];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            printf("%d",a[i]);
            else
                printf(" %d",a[i]);
        }
        printf("\n");

    }
    return 0;
}
