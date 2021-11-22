#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,m,i = 0,sum = 1;
    printf("Enter first integer:\n");
    scanf("%d",&n);
    printf("Enter second integer:\n");
    scanf("%d",&m);
    while (i < m)
    {
        sum *= n;
        i++;
    }
    printf("%d",sum);
    return 0;
}
