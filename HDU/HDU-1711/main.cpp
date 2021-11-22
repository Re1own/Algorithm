#include <bits/stdc++.h>

using namespace std;


void getnextArray(int* b, int len, int * nextarray)
{
    int i = 2;
    int cn = 0;
    nextarray[0] = -1;
    if (len == 1)   return;
    nextarray[1] = 0;
    while(i < len) {
        if (b[i-1] == b[cn]) {
            nextarray[i++] = ++cn;
        }
        else if (cn > 0) {
            cn = nextarray[cn];
        }
        else {
            nextarray[i++] = 0;
        }
    }
    return;
}

int main()
{
    int N;
    scanf("%d",&N);
    getchar();
    while(N--) {
        int n,m;
        scanf("%d %d",&n,&m);
        getchar();
        //memset(next,-1,sizeof(next));
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++) {
            scanf("%d",&a[i]);
        }
        for (int j = 0; j < m; j++) {
            scanf("%d",&b[j]);
        }

        int next[m];
        getnextArray(b,m,next);

        int i = 0, j = 0;
        while(i < n && j < m) {
            if (a[i] == b[j]) {
                i++;
                j++;
            }
            else {
                if (next[j] == -1) {
                    i++;
                }
                else {
                    j = next[j];
                }
            }
        }
        if (j != m) {
            printf("-1\n");
        }
        else {
            printf("%d\n",i-m+1);
        }
    }
    return 0;
}
