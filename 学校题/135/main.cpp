#include <stdio.h>

int main()
{
    int h;
    printf("n       Factorial of n\n");
    for (int i = 1; i <= 5; i++)
    {
        h = 1;
        printf("%-8d",i);
        for (int j = 1; j <= i; j++)
        {
            h *= j;
        }
        printf("%-14d\n",h);
    }
    return 0;
}
