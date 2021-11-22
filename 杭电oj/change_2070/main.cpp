#include <bits/stdc++.h>

using namespace std;

int main()
{
    __int64 F[50],n,i;
    F[0]=0;F[1]=1;
    while(scanf("%I64d",&n)!=EOF&&n!=-1)
    {
        if(n>=2)
        {
            for(i=2;i<=n;i++)
                F[i]=F[i-1]+F[i-2];
        }
        printf("%I64d\n",F[n]);
    }
    return 0;
}
