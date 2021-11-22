#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        int counter = 0;
        while(n--)
        {
            int temp, flag = 0;
            cin >> temp;
            for (int i = 2; i <= sqrt(temp+0.0); i++)
                if (temp%i == 0)
                {
                    flag = 1;
                    break;
                }
                if (flag == 0)  counter ++;
        }
        cout << counter << endl;
    }

    return 0;
}
