
#include <cstdio>
#include <cstring>

int haha(int i)
{
    int a,b;
    char *n[0][10] = {"I","II","III","IV","V","VI","VII","VIII","IX","X"};
    char *m[0][11] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC","C"};
    a = i / 10;
    b = i % 10;
    if (i > 10)
    printf("%s%s",m[0][a-1],n[0][b-1]);
    if (i <= 10)
        printf("%s",n[0][i-1]);
    if (i == 100)
        printf("s",m[0][9]);
}
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        printf("%d:",i);
        haha(i);
        printf("\n");
    }


    return 0;
}
