#include <stdio.h>
#include <math.h>


int main()
{
    int n,a;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        a = (n+1)/2;
        if (i == a-1)
            break;
        for (int j = i; j < a-1; j++)
            printf(" ");
        for (int x = 0; x < 2*(i+1)-1; x++)
            printf("*");
        printf("\n");
    }
    a = (n-1)/2;
    for (int h = 0; h < ((n+1)/2)*2-1; h++)
        printf("*");
    printf("\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf(" ");
        }
        for (int m = 0; m < (a-i)*2-1; m++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
