#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        if (n == 0)
            break;
        set <string> w;
        set <string> l;
        while(n--)
        {
            string winner,loser;
            cin >> winner >> loser;
            l.insert(loser);
            w.insert(winner);
            w.insert(loser);
        }
    if (abs(w.size()-l.size()) == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    w.clear();
    l.clear();
    }
    return 0;
}
