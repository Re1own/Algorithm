#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    char s1[100];
    scanf("%s",s1);
    int len, flag, i, j;    //flag��������Ƿ��Ѿ��ҵ���С����
    len = strlen(s1);
    for (i = 1; i <= len; i++)  //���ַ����ĵڶ����ַ���ʼ
    {
        flag = 1;
        if (len == 1)
            break;
        for (j = i; j < len; j++)
        {
            if (s1[j] != s1[j%i])   //�ӵ�i���ַ���ʼ����len���ַ����ַ������һ���ַ�����i-1���ַ����ıȽ�
            {                       //j%i�ǳ�����ػ�����ǰ��!
                flag = 0;
                break;
            }
        }
        if (flag)   break;
    }
    cout << i;
    return 0;
}
