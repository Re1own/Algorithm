#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    while (scanf("%d",&n) != EOF)
    {
        int sum = 0,temp = 0,money;
        if (n == 0) break;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&money);
            temp = money / 100 + temp;
            money = money % 100;
            temp = money / 50 + temp;
            money = money % 50;
            temp = money / 10 + temp;
            money = money % 10;
            temp = money / 5 + temp;
            money = money % 5;
            temp = money / 2 + temp;
            money = money % 2;
            temp += money;
        }
        printf("%d\n",temp);
    }
    return 0;
}
