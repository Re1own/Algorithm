#include <iostream>
#include <cstdio>
using namespace std;
int a[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
int main()
{
    printf("Element        Value\n");
    for (int i = 0; i < 10; i++)
        printf("%7d%13d\n",i,a[i]);
    return 0;
}
