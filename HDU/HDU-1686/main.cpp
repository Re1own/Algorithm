#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

string str1, str2;
int nextArray[10000];
int n,m;

void getnextArray(void)
{
    int cn = -1, i = 0;
    nextArray[0] = -1;
    while(i < n)
    {
        if (cn == -1 || str1[i] == str1[cn])
        {
            nextArray[++i] = ++cn;
        }
        else
        {
            cn = nextArray[cn];
        }
    }
    return;

}

int KMP(void)
{
    getnextArray();
    int i = 0, j = 0, cnt = 0;
    while(j < m)
    {
        if (i == -1 || str1[i] == str2[j])
        {
            i++,j++;
        }
        else
        {
            i = nextArray[i];
        }
        if (i == n)
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int N;
    cin >> N;

    while(N--)
    {
        ios::sync_with_stdio(0);
        cin >> str1 >> str2;
        n = str1.length(), m = str2.length();
        printf("%d\n",KMP());
    }
    return 0;
}
