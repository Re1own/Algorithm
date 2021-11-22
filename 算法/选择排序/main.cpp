#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
int main()
{
    int a[5] = {5,1,3,6,9};
    int minIndex,j,s;
    minIndex = 0;
    int len = 5;
    for (int i = 0; i < len-1; i++)
    {
        minIndex = i;  //从开头的第一个元素起，拿出来作为临时最小值
        for (int j = 1+i; j < len; j++)
        {
            if (a[minIndex] > a[j])  //通过这个循环将以刚刚拿出来的元素为参照物作比较
                minIndex = j;   //找到后标记索引，再与后面的元素进行比较，最终可以找到最小值
        }
        int temp = a[minIndex]; //把拿出来的元素a[i]与序列中已找到的最小值互换位置
        a[minIndex] = a[i];
        a[i] = temp;
    }
    for (int i = 0; i < 5; i++)
    cout << a[i] << " ";    //依次从小到大输出整个元素序列
    return 0;
}
