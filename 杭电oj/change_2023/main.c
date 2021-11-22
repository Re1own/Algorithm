#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int b[6] = {1,1,2,6,4,5};
    int c[6] = {-1,-2,-3,-4,-5,-6};
    memcpy(b,c,sizeof(int)*3);
    memset(b,0,sizeof(b));
    for (int i = 0; i < 6; i++)
        printf("%d ",b[i]);

    return 0;
}
