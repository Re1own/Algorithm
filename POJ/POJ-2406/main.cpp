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
    return nextarray[len];  //����Ҫ���㵽nextarray[len],��Ϊ�Ǵ����һ���ַ������Լ�֮ǰ��ǰ��׺�Ĺ�������Ҫ���
}
int main()
{
    while(scanf("%s",s) != EOF) {
        if (*s == '.')  break;
        int m = getnextArray();
        int len = strlen(s);
        if (len % (len-m))  printf("%d\n",1);   //len-nextarray[len]������С�Ŀ���ƥ�䳤�ȵ��Ӵ�
        else    printf("%d\n",len / (len-m));   //��ô�ܹ�����˵����һ������ƴ��ԭ�������Գ�������Ǵ��ˣ�
    }

    return 0;
}
