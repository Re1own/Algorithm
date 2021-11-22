#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    char a[5000];
    for (int i = 0; i < n; i++)
    {
        int m = 0;
        scanf("%s",a);
        int len = strlen(a);
        for (int j = 0; j < len; j++)
        {
            if (a[j] != a[len-1-j])
                m = 1;
        }
        if (!m)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
