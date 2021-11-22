#include <bits/stdc++.h>

using namespace std;

int n,m;


int main()
{
    while(scanf("%d %d",&n, &m) != EOF)
    {
        getchar();
        int p,q,sx,sy,ex,ey;
        int a[n+1][m+1];
        int book[n+1][m+1];
        memset(book,0,sizeof(book));
        cin >> p;
        getchar();
        while(p--)
        {
            cin >> sx >> sy >> ex >> ey;
            for (int i = sx; i <= ex; i++)
            {
                for (int j = sy; j <= ey; j++)
                {
                    book[i][j] = 1;
                }
            }
        }
        int flag = 0;
        cin >> q;
        getchar();
        while(q--)
        {
            flag = 0;
            cin >> sx >> sy >> ex >> ey;
            for (int i = sx; i <= ex; i++)
            {
                for (int j = sy; j <= ey; j++)
                {
                    if (book[i][j] == 0)
                    {
                        cout << "NO" << endl;
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)  break;
            }
            if (flag == 0)
                cout << "YES" << endl;
        }
    }
    return 0;
}
