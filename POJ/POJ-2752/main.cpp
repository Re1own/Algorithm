#include <iostream>
#include <cstdio>

using namespace std;

const int maxn = 4e5 + 5;
int nextarray[maxn];

void getnextArray(int len, string s)
{
    int i = 0, cn = -1;
    while(i < len) {
        if (cn == -1 || s[i] == s[cn]) {
            nextarray[++i] = ++cn;
        }
        else {
            cn = nextarray[cn];
        }
    }
    return;

}
int main()
{
    string s;
    ios::sync_with_stdio(false);
    while(cin >> s) {
        getnextArray(s.length(), s);

    }
    return 0;
}
