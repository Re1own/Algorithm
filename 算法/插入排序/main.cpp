#include <iostream>

using namespace std;

int main()
{
    int a[5] = {5,6,2,7,1};
    int preIndex,current;
    for (int i = 1; i < 5; i++)
    {
        preIndex = i - 1; //�����currentǰһ��Ԫ��
        current = a[i];
        while (preIndex >= 0 && a[preIndex] > current)
        {
            a[preIndex+1] = a[preIndex];    //�ô��Ԫ�������ƶ�һλ
            preIndex--; //׼����ǰһ��Ԫ����֮�Ƚ�
        }
        a[preIndex+1] = current;    //�Ƚ���󣬽�С��Ԫ�ط�����ȷ��λ�ã�
    }
    for (int i = 0; i < 5; i++)

        cout << a[i] <<" ";
    return 0;
}
