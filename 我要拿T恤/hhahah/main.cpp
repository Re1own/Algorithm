#include<stdio.h>



int main()

{

    int T,i;

    scanf("%d",&T);

    char c;

    int a,b;

    for(i=0; i<T; i++)

    {


        getchar();
        scanf("%c%d%d",&c,&a,&b);

        if(c=='+')

            printf("%d\n",a+b);

        if(c=='-')

            printf("%d\n",a-b);

        if(c=='*')

            printf("%d\n",a*b);

        if(c=='/')
        {
            double e = double((a*1.0)/b);
            e = double(e+0.0005);
            printf("%.2lf",e);
        }


    }




    return 0;

}
