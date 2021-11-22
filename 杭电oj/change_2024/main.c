#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int n,m,k;
    char a[250];
    scanf("%d",&n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        m = 0;
        gets(a);
        int len = strlen(a);
        for (int j = 0; j < len; j++)
        {
            if (a[0] >= 48 && a[0] <= 57)
            {
                m = 2;
                break;
            }
            if (a[j] == ' ')
            {
                m = 2;
                break;
            }
            if ((a[j] >= 'A' && a[j] <= 'Z') || (a[j] >= 'a' && a[j] <= 'z')|| (a[j] >= '0' && a[j] <= '9')||a[j] == '_')
                m = 1;
            else
            {
                m = 2;
                break;
            }

        }
        if (m == 1)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}

