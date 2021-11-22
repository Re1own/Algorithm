#include <iostream>
#include <cstdio>

using namespace std;

const int maxn = 25;
int n, k, m, a[maxn];

int go(int p, int e, int t)     //p是位置，e是方向，t是步长
{
    while(t--)
    {
        do
        {
            p = (p + e + n - 1) % n + 1;                    //p+e是数的步伐，剩下的操作其实可以
        }                                                   //理解为转了一圈，这步很关键，把逆时针
        while(a[p] == 0);//走到下一个非零数字               //和顺时针的方法都合在一起了！
    }
    return p;
}
int main(void)
{
    while(scanf("%d %d %d",&n,&k,&m) == 3 && n)
    {
    】    for (int i = 1; i <= n; i++)
            a[i] = i;
        int p1 = n, p2 = 1;     //因为A要从1开始顺时针数，所以定义p1为n
        int left = n;           //这样数的时候就包含了1，n就没数进去，又因为
        while(left)             //B要从n开始逆时针数，所以定义p2为1，这样就能把n
        {
            //数进去了
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
