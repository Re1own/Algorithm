#include <stdio.h>



int main()
{
    char grade;
    float a = 0,b= 0,c = 0,d = 0,f = 0,n = 0;
    float s = 0;
    while ((grade = getchar()) != EOF)
     switch (grade)
        {
        case 'a':
        case 'A':
            ++a;
            n++;
            break;
        case 'b':
        case 'B':
            ++b;
            n++;
            break;
        case 'c':
        case 'C':
            ++c;
            n++;
            break;
        case 'd':
        case 'D':
            ++d;
            n++;
            break;
        case 'f':
        case 'F':
            ++f;
            n++;
            break;
            case '\n':
            case '\t':
            case ' ':
            break;
        default:
            break;
        }
    s = (a*4.0 +b*3.0 +c*2.0 + d*1.0 + f*0)/(n*1.0);
    if (s>3.5)
        grade = 'A';
    else if (s > 2.5)
        grade = 'B';
    else if (s > 1.5)
        grade = 'C';
    else if (s > 0.5)
        grade = 'D';
    else if (s <= 0.5)
        grade = 'F';
    printf("Average grade is %c",grade);
    return 0;
}
