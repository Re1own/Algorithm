#include <bits/stdc++.h>

using namespace std;

#define MAX 1000001
int a[MAX];
int main(void)
{
    int number;
    int position = 1;
    for (int i = 2; i < 1000000; i++)
    {
        if (a[i] == 0)
        {
            a[i] = position;
            for (int j = i; j < 1000000; j+=i)  //�����������j=i����Ϊi��������������������������ִ��ڱ�����滹����ѭ�����ǵ�����
            {
                a[j] = position;
            }
            position++;
        }
    }
    while(scanf("%d",&number) != EOF)
    {
        printf("%d\n",a[number]);
    }
    return 0;
}
//��ʵ����˵���˾���������λ�ó����ˣ���ô�������ֵ��������λ�þ��Ǵ𰸣�����



