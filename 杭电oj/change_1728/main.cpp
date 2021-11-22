#include <bits/stdc++.h>

using namespace std;

int x2,y2,k,n,m,flag;
char a[101][101];
int book[101][101];
int next_step[4][2] = {{1,0},{0,-1},{-1,0},{0,1}};

void dfs(int x, int y, int step)
{
    if (x == x2+1 && y == y2+1 && step <= k)
    {
        flag = 1;
    }
    else if (flag != 1)
    {
        for (int i = 0; i < 4; i++)
        {
            if (flag == 1)  break;
            int tx = x + next_step[i][0];
            int ty = y + next_step[i][1];
            if (a[tx][ty] == '*')
            {
                continue;
            }
            else if (tx > n || tx < 0 || ty > m || ty < 0)
            {
                continue;
            }
            else if (book[tx][ty] == 0)
            {
                book[tx][ty] = 1;
                dfs(tx,ty,step+1);
                book[tx][ty] = 0;
            }
        }
    }
}
int main(void)
{
    int N;
    cin >> N;
    getchar();
    while(N--)
    {
        flag = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int x1,y1;
        cin >> k >> x1 >> y1 >> x2 >> y2;
        dfs(x1+1,y1+1,0);
        if (flag)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
