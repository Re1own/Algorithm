#include <bits/stdc++.h>

using namespace std;

const int maxn = 25;
int n, k, m, a[maxn];

int go(int p, int e, int t)     //p��λ�ã�e�Ƿ���t�ǲ���
{
    while(t--)
    {
        do
        {
            p = (p + e + n - 1) % n + 1;    //p+e�����Ĳ�����ʣ�µĲ�����ʵ����
        }                                   //���Ϊת��һȦ���ⲽ�ܹؼ�������ʱ��
        while(a[p] == 0);                   //��˳ʱ��ķ���������һ���ˣ�
    }
    return p;
}
int main(void)
{
    cin >> n >> k >> m;
    for (int i = 1; i <= n; i++)
        a[i] = i;
    int p1 = n, p2 = 1;     //��ΪAҪ��1��ʼ˳ʱ���������Զ���p1Ϊn
    int left = n;           //��������ʱ��Ͱ�����1��n��û����ȥ������Ϊ
    while(left)             //BҪ��n��ʼ��ʱ���������Զ���p2Ϊ1���������ܰ�n
    {                       //����ȥ��
        p1 = go(p1, 1, k);
        p2 = go(p2, -1, m);
        left--;
        a[p1] = 0;
        if (p1 != p2)
        {
            left--;
            cout << p1 << " " << p2 << ",";
            a[p2] = 0;
        }
        else
            cout << p1 << ",";
    }
    return 0;
}
/*  ����P82��ȼý𷢷����-------2019/1/1/21:50  */
