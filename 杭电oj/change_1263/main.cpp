#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,M;
    cin >> N;
    while(N--)
    {
        map <string,map<string,int>> fruit;
        cin >> M;
        for (int i = 0; i < M; i++)
        {
            string f,s;
            int t;
            cin >> f >> s >> t;
            fruit[s][f] += t;
        }
        for (auto i = fruit.begin(); i != fruit.end(); i++)
        {
            cout << i->first << endl;
            for (auto j = i->second.begin(); j != i->second.end(); j++)
            {
                cout << "   |----" << j->first << "(" << j->second << ")" << endl;
            }
        }
        if(N != 0) cout << endl;
    }
    return 0;
}
