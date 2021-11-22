#include <bits/stdc++.h>

using namespace std;

int book[50][50][50];
int maps[50][50][50];
int A,B,C,T;
int cnt = 2<<29;
int next_step[6][3] =  {{0,1,0},{1,0,0}, {0,-1,0} ,{-1,0,0},{0,0,-1},{0,0,1}};
void DFS(int x, int y, int z, int step)
{
    if (step > T)   return;
    else if (x == A-1 && y == B-1 && z == C-1)
    {
        if (step < cnt) cnt = step;
        return;
    }
    else if (A+B+C-x-y-z > T-step)  return;
    else
    {
        for (int i = 0; i < 6; i++)
        {
            int tx = x + next_step[i][0];
            int ty = y + next_step[i][1];
            int tz = z + next_step[i][2];
            if (tx >= A || tx < 0 || ty >= B || ty < 0 || tz >= C || tz < 0)    continue;
            else
            {
                if (book[tx][ty][tz] == 0 && maps[tx][ty][tz] == 0)
                {
                    book[tx][ty][tz] = 1;
                    DFS(tx,ty,tz,step+1);
                    book[tx][ty][tz] = 0;
                }
            }
        }
        return;
    }
}
int main()
{
    int K;
    scanf("%d",&K);
    getchar();
    while(K--)
    {
        memset(book,0,sizeof(book));
        //cin >> A >> B >> C >> T;
        scanf("%d %d %d %d",&A,&B,&C,&T);
        getchar();
        for (int i = 0; i < A; i++)
        {
            for (int j = 0; j < B; j++)
            {
                for (int k = 0; k < C; k++)
                    scanf("%d",&maps[i][j][k]);
            }
        }
        DFS(0,0,0,0);
        if (cnt != 2<<29)
            cout << cnt << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
