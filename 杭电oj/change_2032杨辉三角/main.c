#include <stdio.h>
#include <stdlib.h>
int a[60][60];
void haha(int m)
{
    for (int i = 0; i < m; i++)
    {
        a[i][0] = 1;
    }
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < m; j++)
            a[i][j] = a[i-1][j-1] + a[i-1][j];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
                printf("%d",a[i][j]);
            else
                printf(" %d",a[i][j]);
        }

        printf("\n");
    }
}
int main()
{
    int m;
    while (scanf("%d",&m) != EOF)
    {
        haha(m);
        printf("\n");
    }
    return 0;
}
//a[m][n] = a[m-1][n-1] + a[m-1][n]  a[m][n]表示第m+1行第n+1列的元素值的表达式
