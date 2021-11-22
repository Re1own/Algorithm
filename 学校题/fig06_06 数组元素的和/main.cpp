#include <iostream>
#include <cstdio>
using namespace std;
int a[1000];
int main()
{
    int n,sum = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
        sum += a[i];
    printf("Total of array element values is %d",sum);

    return 0;
}
