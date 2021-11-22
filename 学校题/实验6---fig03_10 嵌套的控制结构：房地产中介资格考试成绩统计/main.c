#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1,pass = 0,a,fail = 0;
    while (i <= 10)
    {
        printf("Enter result ( 1=pass, 2=fail ):\n");
        scanf("%d",&a);
        if (a == 1)
            pass++;
        else if (a == 2)
            fail++;
        i++;
    }
    printf("Passed %d\n",pass);


    printf("Failed %d\n",fail);
    if (pass > 8)
        printf("Bonus to instructor!");
    return 0;
}
