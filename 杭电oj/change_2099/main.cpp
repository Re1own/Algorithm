#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    while (scanf("%d %d",&n,&m) != EOF)
    {
        if (n == 0 && m == 0)   break;
        n = n*100;
        int k = 0;
        for (int i = 0; i <= 99; i++)
            if ((n+i)%m == 0)
            {
                if (k == 0)
                {
                    if (i < 10) printf("0%i",i);
                    else    printf("%d",i);
                }
                else    printf(" %d",i);
                k = 1;
            }
        cout << endl;
    }
    return 0;
}
