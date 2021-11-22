#include <stdio.h>
int main ()
{
    char a;
    while ( getchar(a) != EOF )
    {
    if (( a >= 'a' && a <= 'z') || ( a >= 'A' && a <= 'Z'))
        printf ("YES\n");
    else
        printf ("NO\n");
    }
    return 0;
}
