#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
int main()
{
    int a[5] = {5,1,3,6,9};
    int minIndex,j,s;
    minIndex = 0;
    int len = 5;
    for (int i = 0; i < len-1; i++)
    {
        minIndex = i;  //�ӿ�ͷ�ĵ�һ��Ԫ�����ó�����Ϊ��ʱ��Сֵ
        for (int j = 1+i; j < len; j++)
        {
            if (a[minIndex] > a[j])  //ͨ�����ѭ�����Ըո��ó�����Ԫ��Ϊ���������Ƚ�
                minIndex = j;   //�ҵ�������������������Ԫ�ؽ��бȽϣ����տ����ҵ���Сֵ
        }
        int temp = a[minIndex]; //���ó�����Ԫ��a[i]�����������ҵ�����Сֵ����λ��
        a[minIndex] = a[i];
        a[i] = temp;
    }
    for (int i = 0; i < 5; i++)
    cout << a[i] << " ";    //���δ�С�����������Ԫ������
    return 0;
}
