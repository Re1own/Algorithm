#include <bits/stdc++.h>

using namespace std;

int main()
{
    set <int> haha;
    set <int> xixi;
    set <int> lala;
    int n,m;
    while(scanf("%d %d",&n,&m) != EOF)
    {
        if (n == 0 && m == 0)
            break;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            haha.insert(t);
        }
        for (int i = 0; i < m; i++)
        {
            int t;
            cin >> t;
            xixi.insert(t);
        }
        for (auto i = haha.begin(); i != haha.end(); i++)
        {
            if (xixi.find(*i) != xixi.end())
            {

            }
            else
            {
                lala.insert(*i);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << "NULL" << endl;
            continue;
        }
        else
        {
            for (auto i = lala.begin(); i != lala.end(); i++)
            {
                cout << *i << " ";
            }
        }

        lala.clear();
        xixi.clear();
        haha.clear();
        cout << endl;
    }
    return 0;
}
