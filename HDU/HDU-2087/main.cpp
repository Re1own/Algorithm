#include <bits/stdc++.h>

using namespace std;

int nextarray[1005];
char s1[1005];
char s2[1005];
void getnextarray(void)
{
    int m = strlen(s2);
    int i = 0, cn = -1;
    nextarray[0] = -1;
    while (i < m-1) {
        if (cn == -1 || s2[i] == s2[cn]) {
            nextarray[++i] = ++cn;
        }
        else {
            cn = nextarray[cn];
        }
    }
    return;

}

int KMP(void)
{
    int i = 0, j = 0, cnt = 0;
    getnextarray();
    while(i < strlen(s1)) {
        if (j == -1 || s1[i] == s2[j]) {
            i++,j++;
        }
        else {
            j = nextarray[j];
        }
        if (j == strlen(s2)) {
            cnt++;
            j = 0;
        }
    }
    return cnt;
}
int main()
{

    while(scanf("%s",s1) != EOF) {
        if (*s1 == '#') {
            break;
        }
        scanf("%s",s2);
        printf("%d\n",KMP());
    }
    return 0;
}
