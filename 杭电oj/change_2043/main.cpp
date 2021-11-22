#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string t;
        cin >> t;
        if (t.length() > 16 || t.length() < 8)
            cout << "NO" << endl;
        else
        {
            int f1 = 0, f2 = 0, f3 = 0, f4 = 0;
            for (int i = 0; i < t.length(); i++)
            {
                if (t[i] <= 'Z' && t[i] >= 'A')
                    f1 = 1;
                else if (t[i] >= 'a' && t[i] <= 'z')
                    f2 = 1;
                else if (t[i] <= '9' && t[i] >= '0')
                    f3 = 1;
                else if (t[i] == '~'|| t[i] == ','|| t[i] == '!' || t[i] == '@'|| t[i] == '#'||t[i] == '$'||t[i] == '%'||t[i] == ','||t[i] == '~')
                    f4 = 1;
            }
            int sum = f1 + f2 + f3 + f4;
            if (sum >= 3)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
