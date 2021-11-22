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
        M = tot/n;  //������ÿ�����������յĽ����
        C[0] = 0;
        for (int i = 1; i < n; i++)
        {
            C[i] = C[i-1] + A[i] - M;   //���ƹ�ʽ
        }
        sort(C,C+n);    //ֻ��Ҫ��ǰn-1��������У����һ��Ԫ�ؼӽ�ȥ���ظ�
        long long x1 = C[n/2];  //���Ϊż���������������м䣬���Ϊ����������λ��
        tot = 0;
        for (int i = 0; i < n; i++)
        {
            tot += abs(x1-C[i]);        //�����㵽��λ��֮��ľ���
        }
        cout << tot << endl;
    }
    return 0;
}
