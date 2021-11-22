#include <stdio.h>



int main(void)
{
    int a = 0,i = 0;
    double average,sum = 0;
    printf("Enter an integer ( 9999 to end ):\n");
    while (scanf("%d",&a) != EOF)
    {

        if (a == 9999)
            break;
        sum += a;
        i ++;
        printf("Enter an integer ( 9999 to end ):\n");
    }
    if (i == 0)
        printf("No values were entered.");
    else
    {
        average = sum / i;
        printf("The average is: %.2lf",average);
    }



    return 0;
}
