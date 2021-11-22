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
//在map容器中，没有重复的元素，所以如果用count的话它的返回值只能是0或者1
//map容器中，具体到某一个元素时，用的first表示某一个元素的第一个值，second表示它的第二个值
