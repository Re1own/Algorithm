#include<cstdio>
#include<cstdlib>
#include <iostream>
using namespace std;
int *p;
void hannoi(int n, char a, char b, char c)
{
    if (n == 0) return;
    hannoi(n-1, a,c,b); //将n个圈圈头上的n-1个圈圈从起点(a)绕过休息点(c)到达终点(b)
    printf("将 %d 从 %c 绕过 %c 放到 %c\n",n,a,b,c);  //我每次调用递归时用一个打印说明每一步的过程
    (*p)++; //用指针变量记录操作的次数
    hannoi(n-1, b,a,c); //将n个圈圈头上的n-1个圈圈从起点(b)绕过休息点(a)到达终点(c)
}   //这里我将abc三点抽象成起点、休息点、终点，注意abc三点其实是可以变的！
int main(void)
{
    int n,counter = 0;
    cin >> n;
    p = &counter;
    hannoi(n,'A','B','C');
    printf("移动了 %d 次啊！",counter);
    return 0;
}


