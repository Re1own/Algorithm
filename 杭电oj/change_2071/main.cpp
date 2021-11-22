#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    getchar();
    while(n--)
    {
        int m;
        float high, t;
        high = 0;
        cin >> m;
        getchar();
        while(m--)
        {
            scanf("%f",&t);
            if (t > high)   high = t;
        }
        printf("%.2f\n",high);
    }
    return 0;
}
