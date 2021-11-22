#include <bits/stdc++.h>

using namespace std;

set <int> haha;
bool a[10000];
int prime(int number)
{
    a[1] = false;
    a[2] = true;
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (a[i] == true)
            for (int j = i*i; j <= number; j+=i)
                a[j] = false;
    }
    return 0;
}
int main(void)
{
    int number;
    memset(a,true,sizeof(a));
    while(scanf("%d",&number) && number != 0)
    {
        int counter = 0;
        prime(number);
        for (int i = number/2; i > 1; i--)
        {
            if (a[i] == true && a[number-i] == true && ((number-i) != i))
                counter++;
        }
        cout << counter << endl;
    }
    return 0;
}
