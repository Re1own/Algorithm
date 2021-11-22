#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    for (int i = 2; i <= 100; i+= 2)
    {
        sum += i;
    }
    printf("Sum is %d",sum);
    return 0;
}
