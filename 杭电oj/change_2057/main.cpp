#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    __int64 a, b;
    while (scanf("%I64X%I64X%*c",&a, &b) != EOF)    //注意是大写的i
    {
        if (a + b >= 0)  printf("%I64X\n",a+b);
        else    printf("-%I64X\n",-a-b);    //输入十六进制和计算十六进制的时候可以有正负号，但是输出十六进制时负号要自己打上去
    }

    return 0;
}
