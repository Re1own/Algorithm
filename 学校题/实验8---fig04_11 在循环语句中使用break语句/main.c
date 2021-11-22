#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter;
    for (counter = 1; counter <= 10; ++counter)
    {
        if (counter == 5)
        continue;
        printf("%d\n",counter);
    }
    printf("Used continue to skip printing the value 5");
    return 0;
}
