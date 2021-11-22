#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    while(cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        else
        {
            int sum = 1;
            for(int i = 0; i < m; i++)
            {
                sum = (sum*n)%1000;
            }
            cout << sum << endl;
        }
    }
    return 0;
}
