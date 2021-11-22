#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    char a[8];
    gets(a);
    printf("year=%c%c%c%c\n",a[0][1][2][3]);
    printf("month=%c%c\n",a[4][5]);
    printf("date=%c%c\n",a[6][7]);
    return 0;
}
