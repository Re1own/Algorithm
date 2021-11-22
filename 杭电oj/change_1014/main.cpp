#include <bits/stdc++.h>
using namespace std;

int main()
{
    int step,mod,seed;
    int pd[100000];
    while(cin>>step>>mod)
    {
        printf("%10d%10d    ",step,mod);
        memset(pd,0,100000); //把pd中前1000个数用0代替，并返回到pd
        seed=(0+step)%mod;
        pd[seed]=1;
        while(seed!=0)
        {
            seed=(seed+step)%mod;
            pd[seed]=1;
        }
        bool flag=1;
        for(int i=0; i<mod; i++)
        {
            if(pd[i]==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"Good Choice"<<endl;
        else
            cout<<"Bad Choice"<<endl;
        cout<<endl;
    }
    return 0;
}

