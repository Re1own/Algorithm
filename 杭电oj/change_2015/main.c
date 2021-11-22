#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n,m;
    while (scanf("%d %d",&n, &m) != EOF)
    {
        int a = 0,sum = 0;
        for (int i = 1; i <= n; i++)
        {
            a += 2;
            sum += a;
            if (i%m == 0)
            {
                float average = sum/m;
                if (i == m)
                    printf("%.0f",average);
                else
                    printf(" %.0f",average);
                sum = 0;
            }
        }
        if (n % m != 0)
            printf(" %.0f\n",(float)sum/(n%m));
        else
            printf("\n");
    }



    return 0;
}
