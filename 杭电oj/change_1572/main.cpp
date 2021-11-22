#include <bits/stdc++.h>
#define DebugP(x) std::cout << "Line" << __LINE__ << " " << #x << "=" << x << std::endl
using namespace std;
vector <int> times;
int Min;
int n,timeb;
int vis[105];
int a[31][31];
void dfs(int start, int cnt, int c)
{
    if (c == timeb)
    {
        Min = min(cnt,Min);
        return;
    }
    else
    {
        for (int i = 0; i < timeb; i++)
        {
            if (vis[i] == 0)
            {
                vis[i] = 1;
                dfs(times[i],cnt+a[start][times[i]],c+1);
                vis[i] = 0;
            }
        }
    }
}
int main()
{
    while(scanf("%d",&n) != EOF && n)
    {
        Min = 2 << 29;
        getchar();
        for (int j = 0; j < n; j++)
        for (int i = 0; i < n; i++)
        {
            cin >> a[i][j];
        }
        int t;
        cin >> t;
        times.clear();
        int b[7];
        int book[31];
        memset(book,0,sizeof(book));
        for (int i = 0; i < t; i++)
        {
            int k;
            cin >> k;
            if (book[k] == 0)
            {
                times.push_back(k);
                book[k]++;
            }
            else
                continue;
        }
        timeb = times.size();
        dfs(0,0,0);
        cout << Min << endl;
    }
    return 0;
}
