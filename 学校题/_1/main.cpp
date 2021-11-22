#include <stdio.h>

int main()
{
    int num = 0, cnt = 0;
    int a;
    printf("Enter a number:\n");
    scanf("%d", &num);
    a = num;
    while (num)
    {
        if (num%10 == 7)
            cnt++;
        num /= 10;
    }
    printf("The number %d has %d seven(s) in it\n",a,cnt);
    return 0;
}
