#include <iostream>

using namespace std;

int main(void)
{
    int a[250];
    for (int i = 0; i < 4; i++) a[i] = i+1; //ǰ�������Ŀ
    int n,sum; //nΪ���
    while (cin >> n)
    {
        sum = 0;
        if (n == 0) break;
        else if (n <= 4)    cout << a[n-1] << "\n";
        else if (n > 4){
                for (int i = 5; i < n+1; i++)
            a[i-1] = a[i-2] + a[i-4];
            cout << a[n-1] << "\n";
        }
    }
    return 0;
}
//�Ӵ��ڵ����꿪ʼ����n���������ǰһ���ţ������ǰ�����ţ������Ϊǰ�����ж���ͷţ������ǰһ��Ļ��������Ӷ���ţ
