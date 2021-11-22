#include <stdio.h>
#include <math.h>

int main()
{
    int n,m;
    printf("Enter two unsigned integers in the range 1-20:\n");
    scanf("%d %d",&n,&m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("@");
        printf("\n");
    }
    return 0;
}
