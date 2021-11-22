
#include <stdio.h>
#include <math.h>

void erjinzhi(int n)
{
    int i=0;
    int c[8] = {0,0,0,0,0,0,0,0};
    do {
        c[i++]=n%2;
        n/=2;
    } while(n!=0);

    for(i = 7; i>=0; i--)
        printf("%d",c[i] );
}


int main(void)
{
    printf("Decimal         Binary          Octal           Hexadecimal\n");
    for (int i = 0; i <= 255; i++)
    {
        int k = i;
        printf("%03d             ",i);

        erjinzhi(k);
        printf("        %03o",i);
        printf("             %02X\n",i);
    }
    return 0;
}
