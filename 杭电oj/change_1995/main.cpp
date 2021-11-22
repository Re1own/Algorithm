#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void)
{
    int counter,n,N;
    cin >> n;
    while(n--)
    {
        int m,x;
        cin >> m >> x;
        long long int ok = pow(2,m-x);
        cout << ok << endl;
    }
    return 0;
}
