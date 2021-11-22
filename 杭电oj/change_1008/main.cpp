#include <bits/stdc++.h>

using namespace std;

struct Elevator
{
    int number;
};
int main()
{
    int n, sum;
    Elevator assemb[100];
    while(scanf("%d",&n) != EOF)
    {
        if (n == 0) break;
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            int t;
            scanf("%d",&t);
            assemb[j].number = t;
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                sum += assemb[i].number*6;
            else
            {
                if (assemb[i-1].number < assemb[i].number)
                    sum += 6*(assemb[i].number-assemb[i-1].number);
                else if (assemb[i-1].number > assemb[i].number)
                    sum += 4*(assemb[i-1].number-assemb[i].number);
                sum += 5;
            }

        }
        cout << sum+5 << endl;
    }
    return 0;
}
