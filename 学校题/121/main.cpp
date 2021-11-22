#include <stdio.h>
#include <math.h>

int sanjiao(int a,int b,int c)
{
    if (a + b > c && a + c > b && c + b > a)
        return 1;
    else
        return 0;
}

int gougu (int a,int b, int c)
{
    if (a*a + b*b == c*c || a*a + c*c == b*b || a*a == b*b + c*c)
        return 1;
    else
        return 0;
}

int main()
{
    int counter = 0;
    for (int a = 3; a <= 500; a++)
    {
        for (int b = 1; b <= 500; b++)
        {

            for (int c = b; c <= 500; c++)
                if(sanjiao(a,b,c) && gougu(a,b,c))
                {
                        if (c > b && c > a)
                        {
                            printf("%d %d %d\n",a,b,c);
                        counter ++;
                        }
                }
        }
    }
    printf("A total of %d triples were found.",counter);

    return 0;
}
