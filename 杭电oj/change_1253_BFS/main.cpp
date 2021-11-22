#include <bits/stdc++.h>

using namespace std;

int maps[55][55][55];
int book[55][55][55];
int A,B,C,T,K;
struct node
{
    int x;
    int y;
    int z;
    int step;
};
int next_step[6][3] =  {1,0,0, -1,0,0, 0,0,1, 0,1,0, 0,0,-1, 0,-1,0};

int BFS(int x, int y, int z, int step)
{
    queue <node> q;
    node t;
    t.x = t.y = t.z = t.step = 0;
    q.push(t);
    while(!q.empty())
    {
        t = q.front();
        q.pop();
        for (int i = 0; i < 6; i++)
        {
            node next;
            int tx = next_step[i][0] + t.x;
            int ty = next_step[i][1] + t.y;
            int tz = next_step[i][2] + t.z;
            next.x = tx,next.y = ty,next.z = tz;
            next.step = t.step + 1;
            if(!maps[tx][ty][tz]&&tx>=0&&tx<A&&ty<B&&ty>=0&&tz>=0&&tz<C&&!book[tx][ty][tz])
            {

                book[tx][ty][tz] = 1;
                if (next.step > T)   return -1;
                else if (tx == A-1 && ty == B-1 && tz == C-1)
                {
                    cout << next.step << endl;
                    return 1;
                }
                q.push(next);
            }

        }
    }
    return -1;
}
int main()
{
    cin >> K;
    getchar();
    while(K--)
    {
        memset(book,0,sizeof(book));
        scanf("%d %d %d %d",&A,&B,&C,&T);
        for (int i = 0; i < A; i++)
        {
            for (int j = 0; j < B; j++)
            {
                for (int k = 0; k < C; k++)
                {
                    scanf("%d",&maps[i][j][k]);
                }
            }
        }
        book[0][0][0] = 1;
        if (BFS(0,0,0,0) == -1) cout << -1 << endl;
    }
    return 0;
}
