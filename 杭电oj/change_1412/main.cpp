#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a[20002];
    int n,m;
    while (cin >> n >> m)
    {
        for (int i = 0; i < n + m; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n+m-1; i++)
        {
            for (int j = 0; j < n+m-1-i; j++)
            {
                if (a[j] > a[j+1])
                    swap(a[j],a[j+1]);
            }
        }
        printf("%d",a[0]);
        for (int i = 1; i < n+m; i++)
        {
            if (a[i] != a[i-1])  //此行非常巧妙地处理了重复问题，哈哈！
                cout <<" " <<a[i];
        }
        printf("\n");
    }




    return 0;
}
