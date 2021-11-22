#include <stdio.h>
#include <string.h>
int main()
{
    int i, length;
    long long sum, t;
    char n[10000];
    while(gets(n)&&n[0]!='0')
    {
        length=strlen(n);
        sum=0;
        for(i=0; i<length; i++)
        {
            n[i]=n[i]-48;
            sum+=n[i];
        }
        while(sum>=10)
        {
            t=0;
            while(sum)
            {
                t+=sum%10;
                sum=sum/10;
            }
            sum=t;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
