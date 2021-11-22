#include <bits/stdc++.h>

using namespace std;


int *getnextArray(string t) {
    int len = t.length();
    int cn = 0;
    int i = 2;
    int next[len];
    next[0] = -1;
    if (len == 1)   return next;
    next[1] = 0;
    while(cn < len) {
        if (t[i-1] == t[cn]) {
            next[i++] = ++cn;
        }
        else if (cn < 0) {
            cn = next[cn];
        }
        else {
            next[i++] = 0;
        }
    }
    return next;
}
int main()
{
    string s = "ABCCABCCEF";
    int *next;
    next = getnextArray(s);
    for (int i = 0; i < s.length(); i++) {
        cout << next[i] << endl;
    }
    return 0;
}
