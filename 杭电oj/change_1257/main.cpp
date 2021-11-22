#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        getchar();
        vector <int> daodan;
        int cnt = 0,tt = -1;
        daodan.push_back(tt);
        while(n--)
        {
            int t,i;
            cnt = 0;
            scanf("%d",&t);
            for (i = 0; i < daodan.size(); i++)
            {
                if (t <= daodan[i])
                {
                    daodan[i] = t;
                    goto haha;
                }
            }
            if (i == daodan.size())
            {
                daodan.push_back(t);
            }
            haha:;
        }
        cout << daodan.size()-1 << endl;
    }

    return 0;
}
