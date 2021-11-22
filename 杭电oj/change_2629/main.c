#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[18],b[100];
    int adress;
    for (int i = 0; i < 18; i++)
    {
        scanf("%c",&a[i]);
    }
    adress = (a[0] - '0')*10 + (a[1] - '0');
    if (adress == 33)
        strcpy(b,"zhejiang");
    else if (adress == 11)
        strcpy(b,"beijing");
    else if (adress == 71)
        strcpy(b, "taiwan");
    else if (adress == 81)
        strcpy(b, "hongkong");
    else if (adress == 82)
        strcpy(b, "macao");
    else if (adress == 54)
        strcpy(b, "Tibet");
    else if (adress == 21)
        strcpy(b, "Liaoning");
    else if (adress == 31)
        strcpy(b, "shanghai");
    printf("%s",b);
    return 0;
}
//strcpy(a,b)½«×Ö·û´®b¸´ÖÆµ½×Ö·û´®aÖÐ£¡
