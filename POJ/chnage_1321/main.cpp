#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;


int n,k,cnt;
char maps[8][8];
int vis[8]; //记录列是否走过
void dfs(int r, int step)   //r用来记录当前行数,step用来记录棋子用了几次
{
    if (step == k)  //棋子用完了就让cnt++，因为此时代表一种方式已经成功
    {
        cnt++;
        return;
    }
    if (r >= n) return; //行数不能大于等于最大的行数n
    for (int i = 0; i < n; i++) //对每一列进行递归放
    {
        if (vis[i] == 0 && maps[r][i] == '#')   //'#'表示可以放棋子，vis[i]又表示当前的列还没走过，因此此点可以放
        {
            vis[i] = 1; //放了后就要标记，以免让下次递归的时候放在同一列
            dfs(r+1,step+1);    //让行数加一，因为此时成功放了所以step+1
            vis[i] = 0; //递归回来后标记此点又可以放,让之后回溯后再递归又可以放在此点
        }
    }
    dfs(r+1,step);  //列都循环完了如果此行还没有可以行的'#'放，那么此行就跳过，加一
}
int main()
{
    while(scanf("%d %d",&n,&k) != EOF)
    {
        cnt = 0;
        memset(vis,0,sizeof(vis));
        if (n == -1 && k == -1)
            break;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> maps[i][j];
        dfs(0,0);   //从第零行开始
        cout << cnt << endl;
    }
    return 0;
}
