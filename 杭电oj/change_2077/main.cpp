#include <bits/stdc++.h>

using namespace std;

int dp1[21];    //移到中间
int dp2[21];    //一端移到另外一端  dp2[i] = dp2[i-1]*3+2;
int dp3[21];    //题目所求dp式
int main(void)
{
    int N,n;
    cin >> N;
    dp2[1] = 2;
    dp3[1] = 2;
    dp1[1] = 1;
    for (int i = 2; i < 21; i++)
        dp2[i] = dp2[i-1]*3+2;
    for (int i = 2; i < 21; i++)
        dp1[i] = dp2[i-1]+dp1[i-1]+1;
    for (int i = 2; i < 21; i++)
        dp3[i] = dp1[i-1]*2+2;
    while(N--)
    {
        cin >> n;
        cout << dp3[n] << endl;
    }
    return 0;
}
