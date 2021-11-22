#include <iostream>

using namespace std;

int main(void)
{
    int a[250];
    for (int i = 0; i < 4; i++) a[i] = i+1; //前四年的数目
    int n,sum; //n为年份
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
//从大于第四年开始，第n年的数就是前一年的牛数加上前三年的牛数，因为前三年有多少头牛就能在前一年的基础上增加多少牛
