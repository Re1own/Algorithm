#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char b[250];
    char a[250];
    while (scanf("%s",a) != EOF)
    {
        int len = strlen(a);
        memcpy(b,a,sizeof(char)*len);
        for (int i = 0; i < len-1; i++)
        {
            for (int j = 0; j < len-1-i; j++)
            {
                if (a[j] > a[j+1])
                {
                    a[j] = a[j+1] + a[j];
                    a[j+1] = a[j] - a[j+1];
                    a[j] = a[j] - a[j+1];
                }
            }
        }
        char ch = a[len-1];
        for (int i = 0; i < len; i++)
        {
            printf("%c",b[i]);
            if (ch == b[i])
                printf("(max)");
        }
        printf("\n");

    }
    return 0;
}
