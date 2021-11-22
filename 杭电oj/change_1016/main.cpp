#include <bits/stdc++.h>

using namespace std;

int a[20];
int b[20];
int book[20];
int n;
int j = 1, y = 1;
bool prime(int number)
{
    int i;
    if (number == 2)
        return true;
    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
            break;
    }
    if (number == i)
        return true;
    else
        return false;
}

void dfs(int number, int step)
{
    if (step == n && prime(number+1))
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
                printf("%d",b[i]);
            else
                printf(" %d",b[i]);
        }
        cout << endl;
        return;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (prime(number + i) && book[i] == 0)
            {
                book[i] = 1;
                b[++j] = i;
                dfs(i,step+1);
                b[j--] = 0;
                book[i] = 0;
            }
        }
    }
}
int main()
{
    while(scanf("%d",&n) != EOF)
    {
        memset(b,0,sizeof(b));
        b[1] = 1;
        printf("Case %d:\n",y);
        dfs(1,1);
        y++;
        cout << endl;
    }
    return 0;
}
