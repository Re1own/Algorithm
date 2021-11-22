#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int maxn = 1e6+5;
char s[maxn];
int nextarray[maxn];

int getnextArray(void)
{
    int len = strlen(s);
    int i = 0, cn = -1;
    nextarray[0] = -1;
    while(i < len) {
        if (cn == -1 || s[i] == s[cn]) {
            nextarray[++i] = ++cn;
        }
        else {
            cn = nextarray[cn];
        }
    }
    return nextarray[len];  //必须要计算到nextarray[len],因为是从最后一个字符包括自己之前的前后缀的公共长度要最大
}
int main()
{
    while(scanf("%s",s) != EOF) {
        if (*s == '.')  break;
        int m = getnextArray();
        int len = strlen(s);
        if (len % (len-m))  printf("%d\n",1);   //len-nextarray[len]就是最小的可能匹配长度的子串
        else    printf("%d\n",len / (len-m));   //那么能够整除说明它一定可以拼成原串，所以除法后就是答案了！
    }

    return 0;
}
