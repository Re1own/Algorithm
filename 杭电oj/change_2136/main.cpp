#include <bits/stdc++.h>

using namespace std;

#define MAX 1000001
int a[MAX];
int main(void)
{
    int number;
    int position = 1;
    for (int i = 2; i < 1000000; i++)
    {
        if (a[i] == 0)
        {
            a[i] = position;
            for (int j = i; j < 1000000; j+=i)  //巧妙地运用了j=i，因为i就是素数啊，如果本身是素数又大于本身后面还会有循环覆盖递增！
            {
                a[j] = position;
            }
            position++;
        }
    }
    while(scanf("%d",&number) != EOF)
    {
        printf("%d\n",a[number]);
    }
    return 0;
}
//其实本题说白了就是素数的位置出来了，那么任意数字的最大素数位置就是答案！！！



