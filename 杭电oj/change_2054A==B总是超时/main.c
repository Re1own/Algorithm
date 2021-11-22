#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[10000];
char b[10000];
int main(void)
{
    while(~scanf("%s%s",a,b))
    {
        int no = 0,yes = 0;
        int len_a = strlen(a);
        int len_b = strlen(b);
        int adian = 0,bdian = 0;
        for (int i = 0; i < len_a; i++)
            if (a[i] == '.')
                adian = 1;
        for (int j = 0; j < len_b; j++)
            if (b[j] == '.')
                bdian = 1;
        if (adian == 1 && bdian == 1)
        {
            int min = len_a > len_b?len_b:len_a;
            for (int i = 0; i < min; i++)
            {
                if (a[i] != b[i])
                {
                    no = 1;
                    break;
                }
                else
                    yes = 1;
            }
            if (yes == 1)
            {
                int max = len_a > len_b? len_a:len_b;
                for (int i = min; i < max; i++)
                {
                    if (max == len_a)
                    {
                        if (a[i] == '0')
                            yes = 1;
                        else
                        {
                            no = 1;
                            yes = 0;
                        }
                    }
                    else if (b[i] == '0')
                        yes = 1;
                    else
                    {
                        no = 1;
                        yes = 0;
                    }
                }
            }
        }
        else if (adian == 1 || bdian == 1)
        {
            int mid = len_a < len_b? len_a:len_b;
            for (int i = 0; i < mid; i++)
            {
                if (a[i] != b[i])
                {
                    no = 1;
                    break;
                }
                else
                    yes = 1;
            }
            int haha = len_a > len_b?len_a:len_b;
            for (int i = mid+1; i < haha; i++)
            {
                if (len_a > len_b)
                {
                    if (a[i] != '0')
                    {
                        no = 1;
                        yes = 0;
                        break;
                    }
                    else
                    {
                        no = 0;
                        yes = 1;
                    }

                }
                else
                {
                    if (b[i] != '0')
                    {
                        no = 1;
                        yes = 0;
                        break;
                    }
                    else
                    {
                        no = 0;
                        yes = 1;
                    }
                }
            }
        }
        else
        {
            if (len_a != len_b)
            {
                yes = 0;
                no = 1;
            }
            else
            {
                for (int i = 0; i < len_a; i++)
                {
                    if (a[i] == b[i])
                    {
                        yes = 1;
                        no = 0;
                    }
                    else
                    {
                        no = 1;
                        yes = 0;
                    }
                }
            }
        }
        if (no == 0 && yes == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
//老是存在超时问题,答案输出是对的，今后学了c++后再来看看这题吧！

/*
int main (void)
{
    double a,b;
    scanf("%lf %lf",&a, &b);
    if (a == b)
        printf("yes\n");
    else
        printf("no\n");
}*/
