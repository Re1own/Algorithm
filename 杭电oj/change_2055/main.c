#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    char a[1000];
    int b[1000];
    int sum[1000];
    getchar();
    for (int i = 0; i < n; i++)
    {
        int number;
        scanf("%c",&a[i]);
        scanf("%d",&b[i]);
        if (a[i] >= 65 && a[i] <= 90)
            sum[i] = b[i] + a[i]-64;
        else if (a[i] >= 97 && a[i] <= 122)
            sum[i] = b[i] -(a[i]- 96);
            getchar();
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d\n",sum[j]);
    }
    return 0;
}
