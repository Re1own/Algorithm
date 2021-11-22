#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[5000];
    int n;
    int number;
    scanf("%d",&n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        number = 0;
        gets(a);
        int len = strlen(a);
        for (int j = 0; j < len; j++)
        {
            if (a[j] < 0)
                number ++;
        }
        number = number / 2;
        printf("%d\n",number);
    }
    return 0;
}
