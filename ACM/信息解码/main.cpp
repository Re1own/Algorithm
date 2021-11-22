#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        vector <string> a;  //存放已知关心用户
        map <string,int> b; //用来存放赞的用户和统计相应的赞数
        vector <string> c;  //用来存放大于平均数的用户
        while(n--)
        {
            string str;
            cin >> str;
            a.push_back(str);
        }
        double sum = 0.0, average;
        int m;
        cin >> m;
        while(m--)
        {
            string t;
            int zan;
            cin >> t >> zan;
            sum = sum + zan;
            b[t] = zan;
        }
        average = sum / m;
        cout << average << endl;
        map <string,int> ::iterator it;
        for (it = b.begin(); it != b.end(); it++)
        {
            if (it->second > average)   c.push_back(it->first);
        }
        int ok = 0;
        for (int i = 0; i < c.size(); i++)
        {
            if (!(b.find(c[i]) != b.end()))
            {
                ok = 1;
                cout << c[i] << endl;
            }
        }
        if (ok == 0)    cout << "Bing Mei You" << endl;
    }
    return 0;
}
