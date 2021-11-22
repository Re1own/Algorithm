#include <stdio.h>


unsigned long long int haha(unsigned int n)
{
    if (n <= 1) return 1;
    else    return n*haha(n-1);
}
int main()
{
    for (int i = 0; i < 22; i++)
    {
        printf("%u! = %llu\n",i,haha(i));
    }

    return 0;
}
