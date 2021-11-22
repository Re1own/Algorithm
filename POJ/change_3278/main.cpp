#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <queue>
#include <iostream>
using namespace std;

struct node
{
    int time;
    int point;
};
int vis[100001];
int BFS(int n, int k)
{
    queue <node> haha;
    node start;
    start.time = 0;
    start.point = n;
    haha.push(start);
    while(!haha.empty())
    {
        node father = haha.front();
        haha.pop();
        for (int i = 0; i< 3; i++)
        {
            if (i == 0)
            {
                start.point = father.point+1;
            }
            else if (i == 1)
            {
                start.point = father.point*2;
            }
            else if (i == 2)
                start.point = father.point-1;
            if (start.point > 100000)   continue;
            else if (start.point < 0)   continue;
            start.time = father.time+1;
            if (start.point == k)
                return start.time;
            if (vis[start.point] == 0)
            {
                vis[start.point] = 1;
                haha.push(start);
            }
        }
    }
}
int main()
{
    int N,K;
    cin >> N >> K;
    if (N == K)
        cout << 0;
    else if (N > K)
        cout << N-K;
    else
        cout << BFS(N,K);
    return 0;
}
