#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int a[1000];
int main(void)
{
    int n,i,m;
    scanf("%d",&n);
    for (int j = 0; j < n; j++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    for (i = 0; i < n; i++)
        if (a[i] == m)  break;
    if (i < n)  printf("Found value at index %d",i);
    else    printf("Value not found");
    return 0;
}
