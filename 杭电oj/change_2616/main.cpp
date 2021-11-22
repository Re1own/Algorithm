#include <bits/stdc++.h>

using namespace std;

int n,m,Inf = 20;
struct skill
{
    int effect;
    int effect_blood;
};
skill spell[10];
int book[10];
void DFS(int cnt, int blood)
{
    if (cnt > n)    return;
    else if (Inf > cnt && blood <= 0)   Inf = cnt;
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (book[i] == 0)
            {
                book[i] = 1;
                if (blood <= spell[i].effect_blood)
                    DFS(cnt+1,blood-2*spell[i].effect);
                else
                    DFS(cnt+1,blood-spell[i].effect);
                book[i] = 0;
            }
        }
    }
}
int main()
{
    while(scanf("%d %d",&n,&m) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> spell[i].effect >> spell[i].effect_blood;
        }
        Inf = 20;
        DFS(0,m);
        if (Inf != 20)
            cout << Inf << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
