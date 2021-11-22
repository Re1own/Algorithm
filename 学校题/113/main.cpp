#include <stdio.h>

int main(void)
{
    int counter;
    for (counter = 1; counter <= 10; counter++)
    {
        if (counter == 5)
            break;
        printf("%d\n",counter);
    }
    printf("Broke out of loop at counter == 5");
    return 0;
}
