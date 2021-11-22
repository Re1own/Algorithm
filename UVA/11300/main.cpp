#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 1e6 + 10;
long long A[maxn],C[maxn],tot,M;

int main()
{
    //ios::sync_with_stdio(false);
    int n;
    while(cin >> n)
    {
        tot = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> A[i];
            tot += A[i];
        }
        M = tot/n;  //求分完后每个人手上最终的金币数
        C[0] = 0;
        for (int i = 1; i < n; i++)
        {
            C[i] = C[i-1] + A[i] - M;   //递推公式
        }
        sort(C,C+n);    //只需要对前n-1项排序就行，最后一个元素加进去会重复
        long long x1 = C[n/2];  //如果为偶数就在任意两数中间，如果为奇数就是中位数
        tot = 0;
        for (int i = 0; i < n; i++)
        {
            tot += abs(x1-C[i]);        //各个点到中位数之间的距离
        }
        cout << tot << endl;
    }
    return 0;
}
