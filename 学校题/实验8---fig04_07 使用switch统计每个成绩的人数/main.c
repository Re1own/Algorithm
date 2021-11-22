#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Enter the letter grades.\nEnter the EOF character to end input.\n");
    char ch;
    int grade[5];
    memset(grade,0,sizeof(grade));
    while ((ch = getchar()) != EOF)
    {
        switch (ch)
        {
        case 'a':
        case 'A':
            grade[0]++;
            break;
        case 'b':
        case 'B':
            grade[1]++;
            break;
        case 'c':
        case 'C':
            grade[2]++;
            break;
        case 'd':
        case 'D':
            grade[3]++;
            break;
        case 'f':
        case 'F':
            grade[4]++;
            break;

        case '\n':
        case '\t':
        case ' ':
        break;
            default:
            printf("Incorrect letter grade entered. Enter a new grade.\n");
            break;
        }
    }
    printf("Totals for each letter grade are:\nA: %d\nB: %d\nC: %d\nD: %d\nF: %d\n",grade[0],grade[1],grade[2],grade[3],grade[4]);
    return 0;
}
