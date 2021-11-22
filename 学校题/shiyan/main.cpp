#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

void haha(const int a[])
{
    a[0] = 1;
}
int main()
{
    int a[2] = {20,10};
    haha(a);
    printf("%d %d",a[0],a[1]);
    return 0;
}
