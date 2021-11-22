#include "c1.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    timeb t1,t2;
    long t;
    double x, sum1 = 1, sum = 1;
    int i,n;
    printf("«Î ‰»Îx n: ");
    scanf("%lf%d",&x,&n);
    ftime(&t1);
    for (i = 1; i <= n; i++)
    {
        sum1 *= -1.0/x;
        sum += sum1;
    }
    ftime(&t2);
    t = (t2.time-t1.time)*1000+(t2.millitm-t1.millitm);
    cout << sum << "   " << t << endl;
    return 0;
}
