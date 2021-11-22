#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a,b,c,d,e;
    for (int i = 1000; i < 99999; i++) {
        if (i*n > 99999)    continue;
        else
        {
            int t = i;
            a = t%10;
            t /= 10;
            b = t%10;
            t /= 100;
            c = t%100;

        }
    }
    return 0;
}
