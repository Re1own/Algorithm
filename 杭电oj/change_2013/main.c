#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        int sum = 1;
        for (int i = 0; i < n-1; i++)
        {
            sum = (sum + 1) * 2;
        }
        printf("%d\n",sum);
    }
    return 0;
}
