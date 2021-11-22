#include <stdio.h>



int main()
{
    char grade;
    int a = 0,b = 0,c = 0,d = 0,f = 0;
    printf("Enter the letter grades.\n");
    printf("Enter the EOF character to end input.\n");
    while (scanf("%c",&grade) != EOF )
    {
        if (grade == 'A' || grade == 'a')

            a++;


       if (grade == 'B' || grade == 'b')

            b++;



      if (grade == 'C' || grade == 'c')

            c++;

      if (grade == 'D' || grade == 'd')

            d++;


    if (grade == 'F' || grade == 'f')

            f++;

        switch (grade)
        {
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case ' ':
        case '\n':
        case '\t':
            break;
        default:
            printf("Incorrect letter grade entered. Enter a new grade.\n");
            break;

        }
    }
    printf("Totals for each letter grade are:\n");
    printf( "A: %d\n", a );
    printf( "B: %d\n", b );
    printf( "C: %d\n", c );
    printf( "D: %d\n", d );
    printf( "F: %d\n", f );

    return 0;
}
