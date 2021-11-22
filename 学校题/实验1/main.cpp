#include <stdio.h>



int main(void)
{
    int j = 1;
    int *i = &j;
    while (j <= 10)
    {
        printf("%d\n",*i);
    }

    return 0;
}
