#include <stdio.h>

void a(int *a, int *b)
{
    if (*a < *b)
    {
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
    }
}
int main(void)
{
    int max_1,max_2,x,n = 1;
    int *p ,*q;
    p = &max_1;
    q = &max_2;
    printf("Enter the first number: ");
    scanf("%d",&max_1);
    printf("Enter next number: ");
    scanf("%d",&max_2);
    a(p, q);
    while(n <= 8)
    {
        printf("Enter next number: ");
        scanf("%d",&x);
        a(p,&x);
        a(q,&x);
        n++;
    }
    printf("Largest is %d\nSecond largest is %d\n",max_1, max_2);
}
