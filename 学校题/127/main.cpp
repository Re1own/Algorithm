#include <stdio.h>



int main()
{
    printf("Enter pairs of item numbers and quantities.\n");
    printf("Enter -1 for the item number to end input.\n");
    float x,y;
    float sum = 0,price;
    scanf("%f",&x);
    while (x != -1)
    {
        while ( x<0  || x > 5)
        {
            scanf("%f",&y);
            printf("Invalid product code:  %.0f\n",x);
            printf("            Quantity:  %.0f\n",y);
            scanf("%f",&x);
        }
        scanf("%f",&y);
        if (x == 1)
            price = 2.98;
            else if (x==2)
            price = 4.50;
            else if (x==3)
            price = 9.98;
        else if (x == 4)
            price = 4.49;
        else if (x == 5)
            price = 6.87;
        sum = price * y + sum;
        scanf("%f",&x);
    }
    printf("The total retail value was:  %.2f",sum);
    return 0;
}
