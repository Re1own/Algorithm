#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int number,c;
    scanf("%d",&number);
    c = number;
    printf("%d\n",c);
    printf("%d\n",++c);
    printf("%d\n\n",c);
    c = number;
    printf("%d\n",c);
    printf("%d\n",c++);
    printf("%d\n",c);
    return 0;
}
