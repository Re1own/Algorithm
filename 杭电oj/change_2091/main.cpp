#include <iostream>

using namespace std;

int main()
{
    char a;
    int n;
    int flag = 0;
    while (cin >> a && a != '@' && cin >> n)
    {
        if (flag > 0)  cout << endl;
        if (n == 1)
            cout << a << endl;
        else
        {
            for (int i = 0; i < n-1; i++)
            {
                cout << " ";
            }
            cout << a << endl;//第一行的排列
            for (int i = 2; i < n; i++)
            {
                for (int j = 0; j < n-i; j++)
                {
                    cout << " ";
                }
                cout << a;
                for (int h = 0; h < 2*i-3; h++)
                {
                    cout << " ";
                }
                cout << a << endl;
            }
            for (int i = 0; i < 2*n - 1; i++)
            {
                cout << a;
            }
            cout << endl;

        }


    }
    return 0;
}
//老是显示格式错误，但我感觉思路是对的，还有自己用二维数组写的另一种方法
/*
#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
    char a;
    int n;
    char c[250][250];
    while(1)
    {
        cin >> a;
        if (a == '@')   break;
        cin >> n;
    for (int i = 0; i < 2*n-1; i++)
    {
        c[n-1][i] = a;
    }
    int h1 = 1;
    for (int j = n-2; j >= 0; j--)
    {
        for (int k = 0; k < 2*n-1; k++)
        {
            c[j][k] = ' ';
        }
    }
    for (int i = n-2; i >=0 ; i--)
    {
        c[i][h1++] = a;
        c[i][2*n-h1-1] = a;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
            printf("%c",c[i][j]);
        printf("\n");
    }
    printf("\n");
    }

    return 0;
}
