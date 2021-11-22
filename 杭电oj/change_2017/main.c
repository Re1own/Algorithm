#include <stdio.h>
#include <string.h>
char s[1002];
int main(void)
{
    int n;
    scanf("%d",&n);
    int counter;
    for(int j = 0; j < n; j++)
    {
        counter = 0;
        scanf("%s",s);
        int len;
        len = strlen(s);
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 48 && s[i] <= 57)
                counter++;
        }
        printf("%d\n",counter);
    }

    return 0;
}
