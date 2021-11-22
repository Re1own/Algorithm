#include <bits/stdc++.h>

using namespace std;

struct node
{
    int x;
    int y;
    int s;
};
int main(void)
{
    int book[10][10];
    memset(book,0,sizeof(book));
    char a[10][10];
    int n,m,tx,ty,tail = 0, head = 0,flag = 0;
    int next[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    node que[101];
    que[0].x = 0;
    que[0].y = 0;
    que[0].s = 1;
    tail++;
    while(head < tail)
    {
        for (int i = 0; i < 4; i++)
        {
            tx = que[head].x + next[i][0];
            ty = que[head].y + next[i][1];
            if (tx < 0 || ty < 0 || tx >= m || ty >= n)
                continue;
            if (a[tx][ty] != '#' && book[tx][ty] == 0)
            {

                book[tx][ty] = 1;
                que[tail].s = que[head].s+1;
                que[tail].x = tx;
                que[tail].y = ty;
                tail++;
            }
            if (a[tx][ty] == '@')
            {
                flag = 1;
                break;
            }
        }
        head++;
        if (flag == 1)
            break;
    }
    printf("The lowest step is %d",que[tail-1].s);
}
