#include <stdio.h>
int a[1000];    //用来存放你输入的数字
int main()
{
    int k,n,number,i; //n表示输入几个数字，k表示你要找几次，number表示你要找的数字
    scanf("%d",&n); //输入数字的多少
    for (i = 0; i < n; i++) //用一个for循环输入要输的数字
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k); //输入想要查找的次数
    while(k--)  //循环k次
    {
        int numberok;
        scanf("%d",&number);    //在循环中输入要找的数字
        numberok = 0;  //要找的答案，先让他等于输入的数字
        for (i = 0; i < n; i++)
        {
            if (number < a[i])  //答案就是比输入的数字大且最小，找到了就停止循环
            {
                numberok = a[i];
                break;
            }
        }
        if (number < numberok) //有变化了就代表找到了
            printf("%d\n",numberok);
        else    //否则没找到
            printf("Orz\n");
    }
    return 0;
}
