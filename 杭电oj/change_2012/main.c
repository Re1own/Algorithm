#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int sushu(int x)
{
    int i;
    for ( i = 2; i <= x; i++)
    {
        int j = x % i;
        if (j == 0)
            break;
    }
    if (i == x)
        return 1;
    else
        return 0;
}
int main(void)
{
    while(1)
    {
        int n,m,i;
        scanf("%d %d",&n, &m);
        if (n == 0 && m == 0)
            break;
        for (i = n; i <= m; i++)
        {
            if(sushu(pow(i,2)+i+41) == 0)
                break;
        }
        if (i-1 == m)
            printf("OK\n");
        else
            printf("Sorry\n");
    }
    return 0;


}
