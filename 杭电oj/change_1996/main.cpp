#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n,m;
    long long int sum;
    cin >> n;
    while(n--)
    {
        sum = 0;
        cin >> m;
        sum = pow(3,m);
        cout << sum << endl;
    }
    return 0;
}
