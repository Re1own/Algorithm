#include <stdio.h>



int main(void)
{
    int j = 1;
    int *i = &j;
    for (;j <= 10;j++)
    {
        printf("%d\n",*i);
    }

    return 0;
}

