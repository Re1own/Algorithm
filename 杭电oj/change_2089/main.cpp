#include <bits/stdc++.h>

using namespace std;

int ok(int number)
{
    do
    {
        int a = number % 10, b = number % 100;  //�ж�һ�������Ƿ���һλ����ȡ10���������ж��Ƿ���һ����λ����ȡ100������
        number /= 10;
        if (a == 4 || b == 62)  return 1;
    }
    while (number > 0);
    return 0;
}
int main(void)
{
    int n,m;
    while(~scanf("%d %d",&n,&m) && (n != 0 && m != 0))
    {
        int counter = 0;
        for (int i = n; i <= m; i++)
        {
            if (!ok(i))  counter++;
        }
        printf("%d\n",counter);
    }
}
