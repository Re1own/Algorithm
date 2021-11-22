#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int number;
    while(cin >> number && number) {
        int bit = -1;
        while(number % 2 == 0) {
            bit++;
            number /= 2;
        }
        cout << (2<<bit) << endl;
    }
    return 0;
}
