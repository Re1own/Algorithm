#include <bits/stdc++.h>

using namespace std;

int ten(int number)
{
    int sum = 0;
    do
    {
        sum += number%10;
        number /= 10;
    }
    while(number > 0);
    return sum;
}

bool tws(int number, int sum)
{
    int answer = 0;
    do
    {
        answer += (number % 12);
        number /= 12;
    }
    while (number > 0);
    if (sum == answer)  return true;
    else    return false;
}

bool sixth(int number, int sum)
{
    int answer = 0;
    do
    {
        answer += (number % 16);
        number /= 16;
    }
    while (number > 0);
    if (sum == answer)  return true;
    else    return false;
}
int main(void)
{
    int number;
    while(scanf("%d",&number) && number != 0)
    {
        int sum = ten(number);
        if (sixth(number,sum) && tws(number,sum))   printf("%d is a Sky Number.\n",number);
        else    printf("%d is not a Sky Number.\n",number);
    }
    return 0;
}
