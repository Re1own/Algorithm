#include <iostream>

using namespace std;

int main()
{
    int a[5] = {5,6,2,7,1};
    int preIndex,current;
    for (int i = 1; i < 5; i++)
    {
        preIndex = i - 1; //相对于current前一个元素
        current = a[i];
        while (preIndex >= 0 && a[preIndex] > current)
        {
            a[preIndex+1] = a[preIndex];    //让大的元素往后移动一位
            preIndex--; //准备再前一个元素与之比较
        }
        a[preIndex+1] = current;    //比较完后，将小的元素放在正确的位置！
    }
    for (int i = 0; i < 5; i++)

        cout << a[i] <<" ";
    return 0;
}
