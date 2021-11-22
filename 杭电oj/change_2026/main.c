#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char a[250];
    while (gets(a) != NULL)
    {
        int len = strlen(a);
        a[0] = a[0] - 32;
        for (int i = 0; i < len; i++)
        {
            if (a[i] == ' ')
                a[i+1] = a[i+1] - 32;
            printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
