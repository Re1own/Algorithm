#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    __int64 a, b;
    while (scanf("%I64X%I64X%*c",&a, &b) != EOF)    //ע���Ǵ�д��i
    {
        if (a + b >= 0)  printf("%I64X\n",a+b);
        else    printf("-%I64X\n",-a-b);    //����ʮ�����ƺͼ���ʮ�����Ƶ�ʱ������������ţ��������ʮ������ʱ����Ҫ�Լ�����ȥ
    }

    return 0;
}
