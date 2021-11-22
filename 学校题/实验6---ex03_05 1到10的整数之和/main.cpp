#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int sum = 0,i = 1;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    printf("The sum is: %d",sum);
    return 0;
}
