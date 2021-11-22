#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number, r;
    while(~scanf("%d %d",&number, &r))
    {
        vector <int> haha;
        string str = "";
        if (number < 0) printf("-");
        int tr;
        number = abs(number);
        do
        {
            tr = number%r;
            number /= r;
            haha.push_back(tr);
        }
        while(number > 0);
        for (int i = haha.size()-1; i >= 0; i--)
        {
            if (haha[i] == 10)  printf("A");
            else if (haha[i] == 11)  printf("B");
            else if (haha[i] == 12)  printf("C");
            else if (haha[i] == 13)  printf("D");
            else if (haha[i] == 14)  printf("E");
            else if (haha[i] == 15)  printf("F");
            else    printf("%d",abs(haha[i]));
        }
        printf("\n");
    }

    return 0;
}
