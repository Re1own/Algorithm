#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int horizontal[8] = {2,1,-1,-2,-2,-1,1,2};
    int vertical[8] = {-1,-2,-2,-1,1,2,2,1};
    int a[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            a[i][j] = 0;
    }
    int currentRow,currentColumn;
    scanf("%d %d",&currentRow,&currentColumn);
    a[currentRow][currentColumn] = 1;
    int step = 1;
    int haha;
    int x;
    int c[8][8] = {2,3,4,4,4,4,3,2,3,4,6,6,6,6,4,3,4,6,8,8,8,8,6,4,4,6,8,8,8,8,6,4,4,6,8,8,8,8,6,4,4,6,8,8,8,8,6,4,3,4,6,6,6,6,4,3,2,3,4,4,4,4,3,2};
    while(haha != step)
    {
        haha = step;
        int hehe = 8;
        for (int i = 0; i < 8; i++)
        {
            if (a[currentRow+vertical[i]][currentColumn+horizontal[i]] == 0 && currentRow+vertical[i]<=7 && currentRow+vertical[i] >= 0 &&currentColumn+horizontal[i] <= 7 && currentColumn+horizontal[i] >= 0)
            {
                if (c[currentRow+vertical[i]][currentColumn+horizontal[i]] < hehe)
                {
                    hehe =  c[currentRow+vertical[i]][currentColumn+horizontal[i]];
                    x = i;
                }
            }
        }
                a[currentRow+vertical[x]][currentColumn+horizontal[x]] = step++;
                currentRow += vertical[x];
                currentColumn += horizontal[x];

    }
    printf("The tour ended with %d moves.\n",step);
    if (step != 64) printf("This is not a full tour.\n");
    printf("The board for this test is:\n");
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }



    return 0;
}
