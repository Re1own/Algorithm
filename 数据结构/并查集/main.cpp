#include <bits/stdc++.h>

using namespace std;

int a[1000];

int getf(int v);
void merge(int x, int y)
{
    int j,k;
    j = getf(x);
    k = getf(y);
    if (j != k)
    {
        a[k] = j;
    }
    return;
}

int getf(int v)
{
    if (a[v] == v)  return v;
    else
    {
        a[v] = getf(a[v]);
        return a[v];
    }
}

int main()
{
    int n,m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    while(m--)
    {
        int x,y;
        cin >> x >> y;
        merge(x,y);
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == i)
            sum++;
    }
    cout << sum;
    return 0;
}
