#include <bits/stdc++.h>

using namespace std;
char a[100][100];   // @为终点  #为障碍物  *为可行路
int b[100][100];
int ok,n,m,tx,ty;
int mins = 99999;
int c[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
void dfs(int x, int y, int step)
{
    if (a[x][y] == '@')
    {
        if (mins > step)
            mins = step;
        return;
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            tx = x + c[i][0];
            ty = y + c[i][1];
            if (tx >= m || ty >= n || tx < 0 || ty < 0 || a[tx][ty] == '#')
            {
                continue;
            }
            else if ((a[tx][ty] == '*' || a[tx][ty] == '@')&& (b[tx][ty] == 0))
            {
                b[tx][ty] = 1;
                dfs(tx,ty,step+1);
                b[tx][ty] = 0;
            }
        }
    }
    return;

}
int main(void)
{
    cin >> n >> m;
    memset(b,0,sizeof(b));
    b[0][0] = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    dfs(0,0,1);
    cout << mins;
    return 0;
}
