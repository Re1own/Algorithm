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
//getchar��һ��int�͵ķ���ֵ.���������getcharʱ.����͵����û�����.�û�������ַ�������ڼ��̻�������.ֱ���û����س�Ϊֹ(�س��ַ�Ҳ���ڻ�������).���û�����س�֮��,getchar�ſ�ʼ��stdio����ÿ�ζ���һ���ַ�.getchar�����ķ���ֵ���û�����ĵ�һ���ַ���ASCII��,�������-1,�ҽ��û�������ַ����Ե���Ļ.���û��ڰ��س�֮ǰ�����˲�ֹһ���ַ�,�����ַ��ᱣ���ڼ��̻�������,�ȴ�����getchar���ö�ȡ.Ҳ����˵,������getchar���ò���ȴ��û�����,��ֱ�Ӷ�ȡ�������е��ַ�,ֱ���������е��ַ�����Ϊ��,�ŵȴ��û�����.
