#include<cstdio>
#include<cstdlib>
#include <iostream>
using namespace std;
int *p;
void hannoi(int n, char a, char b, char c)
{
    if (n == 0) return;
    hannoi(n-1, a,c,b); //��n��ȦȦͷ�ϵ�n-1��ȦȦ�����(a)�ƹ���Ϣ��(c)�����յ�(b)
    printf("�� %d �� %c �ƹ� %c �ŵ� %c\n",n,a,b,c);  //��ÿ�ε��õݹ�ʱ��һ����ӡ˵��ÿһ���Ĺ���
    (*p)++; //��ָ�������¼�����Ĵ���
    hannoi(n-1, b,a,c); //��n��ȦȦͷ�ϵ�n-1��ȦȦ�����(b)�ƹ���Ϣ��(a)�����յ�(c)
}   //�����ҽ�abc����������㡢��Ϣ�㡢�յ㣬ע��abc������ʵ�ǿ��Ա�ģ�
int main(void)
{
    int n,counter = 0;
    cin >> n;
    p = &counter;
    hannoi(n,'A','B','C');
    printf("�ƶ��� %d �ΰ���",counter);
    return 0;
}


