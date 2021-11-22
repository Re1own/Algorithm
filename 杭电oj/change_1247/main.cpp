#include <bits/stdc++.h>

using namespace std;

int main()
{
    set <string> haha;
    set <string> xixi;
    string s;
    while(cin >> s)
    {
        haha.insert(s);
    }
    for (auto i = haha.begin(); i != haha.end(); i++)
    {
        s = *i;
        string t1 = "";
        for (int j = 0; j < s.length(); j++)
        {
            string t2 = "";
            t1 = t1 + s[j];
            if (haha.find(t1) != haha.end())
            {
                for (int k = j+1; k < s.length(); k++)
                    t2 = t2 + s[k];
                if (haha.find(t2) != haha.end())
                {
                    xixi.insert(s);
                }
            }
        }
    }
    for (auto i = xixi.begin(); i != xixi.end(); i++)
        cout << *i << endl;
    return 0;
}
