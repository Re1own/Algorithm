#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    while(scanf("%d%*c",&n) && n != 0)
    {
        map <string,int> str;
        while(n--)
        {
            string t;
            cin >> t;
            if (str.end() != str.find(t))
                str[t]++;
            else
                str[t] = 1;
        }
        int maxs = 0;
        string maxstring;
        for (auto i = str.begin(); i != str.end(); i++)
        {
            if(i->second > maxs)
            {
                maxstring = i->first;
                maxs = i->second;
            }
        }
        cout << maxstring << endl;
    }
    return 0;
}
//��map�����У�û���ظ���Ԫ�أ����������count�Ļ����ķ���ֵֻ����0����1
//map�����У����嵽ĳһ��Ԫ��ʱ���õ�first��ʾĳһ��Ԫ�صĵ�һ��ֵ��second��ʾ���ĵڶ���ֵ
