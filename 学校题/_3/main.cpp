#include <stdio.h>



int main(void)
{
    int j = 0;
    int *i = &j;
    do
    {
        j++;
        printf("%d\n",*i);
    }
    while (j < 10);

    return 0;
}
