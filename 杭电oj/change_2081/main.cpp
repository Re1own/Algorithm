#include <cstdio>
int main(void)
{
    int a[10];
    printf("输入十个数\n");
    for (int i = 0; i < 10; i++)
        scanf("%d",&a[i]);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9-i; j++)
        {
            if (a[j] > a[j+1])
            {
                a[j] = a[j] + a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];
            }
        }
    }
    int first = 0;
    for (int i = 0; i < 10; i++)
    {
        if (first == 0)
        {
            printf("%d",a[i]);
            first = 1;
        }
        else
            printf(" %d",a[i]);
    }
    return 0;
}
