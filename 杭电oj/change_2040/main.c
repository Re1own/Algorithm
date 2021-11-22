#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int haha(int x, int y)
{
    int a[50];
    int b[50];
    int i = 0,j = 0;
    for (int number = 1; number < x; number++)
    {
        if (x % number == 0)
        {
            a[i] = number;
            i++;
        }
    }
    for (int number = 1; number < y; number++)
    {
        if (y % number == 0)
        {
            b[j] = number;
            j++;
        }
    }
    int sum_a = 0, sum_b = 0;
    for (int k = 0; k < i; k++)
        sum_a += a[k];
    for (int k = 0; k < j; k++)
        sum_b += b[k];
    if (sum_a == y && sum_b == x)
        return 1;
    else
        return 0;
}
int main(void)
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int x,y;
        scanf("%d %d",&x, &y);
        int h = haha(x,y);
        if(h)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
