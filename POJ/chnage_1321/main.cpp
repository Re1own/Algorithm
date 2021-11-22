#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;


int n,k,cnt;
char maps[8][8];
int vis[8]; //��¼���Ƿ��߹�
void dfs(int r, int step)   //r������¼��ǰ����,step������¼�������˼���
{
    if (step == k)  //���������˾���cnt++����Ϊ��ʱ����һ�ַ�ʽ�Ѿ��ɹ�
    {
        cnt++;
        return;
    }
    if (r >= n) return; //�������ܴ��ڵ�����������n
    for (int i = 0; i < n; i++) //��ÿһ�н��еݹ��
    {
        if (vis[i] == 0 && maps[r][i] == '#')   //'#'��ʾ���Է����ӣ�vis[i]�ֱ�ʾ��ǰ���л�û�߹�����˴˵���Է�
        {
            vis[i] = 1; //���˺��Ҫ��ǣ��������´εݹ��ʱ�����ͬһ��
            dfs(r+1,step+1);    //��������һ����Ϊ��ʱ�ɹ���������step+1
            vis[i] = 0; //�ݹ�������Ǵ˵��ֿ��Է�,��֮����ݺ��ٵݹ��ֿ��Է��ڴ˵�
        }
    }
    dfs(r+1,step);  //�ж�ѭ������������л�û�п����е�'#'�ţ���ô���о���������һ
}
int main()
{
    while(scanf("%d %d",&n,&k) != EOF)
    {
        cnt = 0;
        memset(vis,0,sizeof(vis));
        if (n == -1 && k == -1)
            break;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> maps[i][j];
        dfs(0,0);   //�ӵ����п�ʼ
        cout << cnt << endl;
    }
    return 0;
}
