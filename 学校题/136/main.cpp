#include <stdio.h>



int main()
{
    int n,a,t,xiao = 0;
    printf("Enter the number of integers to be processed:\n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        printf("Enter an integer:\n");
        if (i > 0)
            printf("Enter next integer:\n");
        scanf("%d",&a);
        if (i == 0)
            xiao = a;

        if (a < xiao)
        {
            t = xiao;
            xiao = a;
            a = t;
        }
    }
    printf("The smallest integer is: %d",xiao);
    return 0;
}
