#include <bits/stdc++.h>

using namespace std;

int ok(int number)
{
    do
    {
        int a = number % 10, b = number % 100;  //判断一个数中是否有一位数是取10的余数，判断是否有一个两位数是取100的余数
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
