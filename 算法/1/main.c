#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define h  105
#define k  105


int main()
{
    int a[5] = {5,6,7,8,9};
    int b[5] = {1,2,3,4,5};
    memcpy(a,b,sizeof(b));
    for (int i = 0; i < 5; i--)
        printf("%d\n",a[i]);
    return 0;
}
