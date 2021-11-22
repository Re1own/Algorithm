#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[1000];
int findnumber(int a[], int n, int m)
{
    int mid,right,left;
    right = n - 1;
    left = 0;
    while (left <= right)
    {
        mid = (right + left)/2;
        if (a[mid] == m)
        {
            return mid;
            break;
        }
        else if (a[mid] > m)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}
    int main(void)
    {
        int n,m,j;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> m;
        if(findnumber(a,n,m) != -1) printf("Found value at index %d",findnumber(a,n,m));
        else    printf("Value not found");
        return 0;
    }
