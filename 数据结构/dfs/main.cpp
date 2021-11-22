#include <bits/stdc++.h>

using namespace std;

int n;
int box[100];
int book[100];
void dfs(int step)
{
    if (step == n+1)
    {
        for (int i = 1; i <= n; i++)
            printf("%d ",box[i]);
        printf("\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (book[i] == 0)
            {
                box[step] = i;
                book[i] = 1;
                dfs(step+1);
                book[i] = 0;
            }
        }
    }
    return;
}
int main(void)
{
    cin >> n;
    dfs(1);
    return 0;
}
