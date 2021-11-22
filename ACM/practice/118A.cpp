#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str, ans = "";
    cin >> str;
    int len = str.length();
    for (int i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
        if (str[i] == 'a' || str[i] == 'o' ||  str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i') {
            continue;
        }
        else {
            ans += str[i];
        }
    }
    for (int i = 0; i < ans.length(); i++) {
        cout << "." << ans[i];
    }
    return 0;
}