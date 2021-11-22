#include <bits/stdc++.h>

using namespace std;

int n,number;

typedef struct node
{
    int step;
}* pnode;
int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        number = 0;
        cin >> n;
        int dp[100000];
        memset(dp,0,sizeof(dp));
        dp[1] = 0;
        dp[2] = 1;
        dp[3] = 2;
        for (int i = 4; i <= n; i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        cout << dp[n] << endl;

    }

    return 0;
}
