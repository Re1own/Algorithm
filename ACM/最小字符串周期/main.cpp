#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    char s1[100];
    scanf("%s",s1);
    int len, flag, i, j;    //flag用来标记是否已经找到最小周期
    len = strlen(s1);
    for (i = 1; i <= len; i++)  //从字符串的第二个字符开始
    {
        flag = 1;
        if (len == 1)
            break;
        for (j = i; j < len; j++)
        {
            if (s1[j] != s1[j%i])   //从第i个字符开始到第len个字符的字符串与第一个字符到第i-1个字符串的比较
            {                       //j%i非常巧妙地换到了前面!
                flag = 0;
                break;
            }
        }
        if (flag)   break;
    }
    cout << i;
    return 0;
}
