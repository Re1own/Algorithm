#include <bits/stdc++.h>

using namespace std;

int n,m,t,ex,ey,sx,sy;
char maps[8][8];
int book[8][8];
int go[4][2] = {1,0,0,-1,-1,0,0,1};
int flag;
void dfs(int x, int y, int step)
{
    if (step == t && maps[x][y] == 'D')
    {
        flag = 1;
        return;
    }
    else if (maps[x][y] == 'X')
        return;
    else if (step > t)
        return;
    else
    {
        if (flag == 1)
            return;
        for (int i = 0; i < 4; i++)
        {
            int tx = x + go[i][0];
            int ty = y + go[i][1];
            if (tx < 0 || tx >= n || ty < 0 || ty >= m)
            {
                continue;
            }
            else
            {
                if (book[tx][ty] == 0)
                {
                    book[tx][ty] = 1;
                    dfs(tx,ty,step+1);
                    book[tx][ty] = 0;
                }

            }
            if (flag == 1)
                return;
        }
    }

}
int main()
{
    while(scanf("%d %d %d",&n,&m,&t) != EOF && n && m && t)
    {
        memset(book,0,sizeof(book));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> maps[i][j];
                if (maps[i][j] == 'S')
                    sx = i,sy = j;
                else if (maps[i][j] == 'D')
                    ex = i,ey = j;
            }
        }
        if ((sx + sy + ex + ey + t)%2 == 1)
        {
           cout << "NO" << endl;
            continue;
        }
        book[sx][sy] = 1;
        dfs(sx,sy,0);
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        flag = 0;
    }
    return 0;
}
