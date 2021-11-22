#include <iostream>
#include <cstdio>

using namespace std;

const int maxn = 25;
int n, k, m, a[maxn];

int go(int p, int e, int t)     //p��λ�ã�e�Ƿ���t�ǲ���
{
    while(t--)
    {
        do
        {
            p = (p + e + n - 1) % n + 1;                    //p+e�����Ĳ�����ʣ�µĲ�����ʵ����
        }                                                   //���Ϊת��һȦ���ⲽ�ܹؼ�������ʱ��
        while(a[p] == 0);//�ߵ���һ����������               //��˳ʱ��ķ���������һ���ˣ�
    }
    return p;
}
int main(void)
{
    while(scanf("%d %d %d",&n,&k,&m) == 3 && n)
    {
    ��    for (int i = 1; i <= n; i++)
            a[i] = i;
        int p1 = n, p2 = 1;     //��ΪAҪ��1��ʼ˳ʱ���������Զ���p1Ϊn
        int left = n;           //��������ʱ��Ͱ�����1��n��û����ȥ������Ϊ
        while(left)             //BҪ��n��ʼ��ʱ���������Զ���p2Ϊ1���������ܰ�n
        {
            //����ȥ��
            p1 = go(p1, 1, k);
            p2 = go(p2, -1, m);
            left--;
            a[p1] = a[p2] = 0;
            printf("%3d",p1);
            if (p1 != p2)
            {
                printf("%3d",p2);
                left--;
            }
            if (left)
                printf(",");
        }
        printf("\n");
    }
    return 0;
}
