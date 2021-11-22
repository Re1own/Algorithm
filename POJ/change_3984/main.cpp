#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int a[5][5];
int vis[5][5];
int go[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
typedef struct node
{
    int x;
    int y;
    int step;
    node * father;
}* pnode;
void BFS(int x, int y, int step)
{
    pnode start;
    start->x = x;
    start->y = y;
    start->step = 0;
    start->father = nullptr;
    queue <pnode> haha;
    queue <node> xixi;
    haha.push(start);
    while(!haha.empty())
    {
        start = haha.front();
        for (int i = 0; i < 4; i++)
        {
            int tx = start->x + go[i][0];
            int ty = start->y + go[i][1];
            if (tx >= 5 || tx < 0 || ty >= 5 || ty < 0) continue;
            else if (vis[tx][ty] == 1 || a[tx][ty] == 1)  continue;
            else if (vis[tx][ty] == 0 && a[tx][ty] == 0)
            {
                pnode now = (pnode)malloc(sizeof(node));
                vis[tx][ty] = 1;
                now->father = start;
                now->x = tx;
                now->y = ty;
                now->step = start->step+1;
                haha.push(now);
                if (tx == 4 && ty == 4)
                {
                    cout << now->step;
                    return;
                }
            }
        }
        haha.pop();
    }

}
int main()
{
    int n = 5;
    memset(vis,0,sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    BFS(0,0,0);
    return 0;
}
