#include <iostream>
#include <cstdio>
#include <cstring>
int main()
{
    int n,m;
    scanf("%d",&n);
    char ch[250];

    while (n--)
    {
        gets(ch);
        int a = 0,e = 0,i = 0,o = 0,u = 0;
        int len = strlen(ch);
        for (int h = 0; h < len; h++)
        {
            switch (ch[h])
            {
            case 'a':

                a++;
                break;
            case 'e':

                e++;
                break;
            case 'i':

                i++;
                break;
            case 'o':

                o++;
                break;
            case 'u':

                u++;
                break;
            default:
                break;
            }
        }
        printf("a:%d\n",a);
        printf("e:%d\n",e);
        printf("i:%d\n",i);
        printf("o:%d\n",o);
        printf("u:%d\n",u);
        if(n)   printf("\n");
    }
    return 0;
}
//getchar有一个int型的返回值.当程序调用getchar时.程序就等着用户按键.用户输入的字符被存放在键盘缓冲区中.直到用户按回车为止(回车字符也放在缓冲区中).当用户键入回车之后,getchar才开始从stdio流中每次读入一个字符.getchar函数的返回值是用户输入的第一个字符的ASCII码,如出错返回-1,且将用户输入的字符回显到屏幕.如用户在按回车之前输入了不止一个字符,其他字符会保留在键盘缓存区中,等待后续getchar调用读取.也就是说,后续的getchar调用不会等待用户按键,而直接读取缓冲区中的字符,直到缓冲区中的字符读完为后,才等待用户按键.
