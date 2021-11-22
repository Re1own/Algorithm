#include<cstdio>

using namespace std;
const int MAXN=4e5+5;
#define fp(i,a,b) for(register int i=a;i<=b;i++)
int n,flag,a[4],b[MAXN];
inline void dfs(int x,int step){
	if(flag) return;
	b[step]=x;
	if(step==n) return flag=1,void();
	if(x+1<=4&&a[x+1]) a[x+1]--,dfs(x+1,step+1),a[x+1]++;
	else if(x-1>=0&&a[x-1])	a[x-1]--,dfs(x-1,step+1),a[x-1]++;
}
int main(){
	fp(i,0,3) scanf("%d",&a[i]),n+=a[i];
	fp(i,0,3){
		if(!a[i]) continue;
		a[i]--;dfs(i,1);a[i]++;
        if(flag) break;
	}
	if(!flag) puts("NO");
	else{
		puts("YES");
		fp(i,1,n) printf("%d ",b[i]);
		puts("");
	}
	return 0;
}