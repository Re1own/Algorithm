#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <functional>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    while(T--) {
        int m;
        cin >> m;
        string str[m];
        for (int i = 0; i < m; i++) {
            cin >> str[i];
        }
        string nowstr = str[0];
        int flag = 0, answerlen = 0;
        string answer = "", t;
        for (int i = 3; i <= 60; i++) {
            for (int j = 0; j <= 60-i; j++) {
                flag = 0;
                t = nowstr.substr(j,i);
                for (int k = 1; k < m; k++) {
                    if (str[k].find(t) == -1) {
                        flag = 1;   //有一个数组没找到当前子串
                        break;
                    }
                }
                if (flag == 1)  continue;
                if (answerlen < t.length() && flag == 0) {
                    answerlen = t.length();
                    answer = t;
                }
                else if (answerlen == t.length() && flag == 0) {
                    if (answer > t && flag == 0) answer = t;
                }
            }
        }
        if (answerlen == 0) {
            cout << "no significant commonalities" << endl;
        }
        else {
            cout << answer << endl;
        }
    }
    return 0;
}
