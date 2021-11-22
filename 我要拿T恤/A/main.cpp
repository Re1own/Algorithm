#include <stdio.h>
#include <math.h>
int main(void)
{
    float a,b,c,delt,x1,x2;
    while(scanf("%f%f%f",&a,&b,&c)!=EOF)
    {
        delt = b*b-4*a*c;
        x2 = (-b+sqrt(delt))/(2*a);
        x1 = (-b-sqrt(delt))/(2*a);
        if (a == 0)
            printf("Not quadratic equation\n");
        else
        {
            if (delt == 0)
                printf("x1=x2=%.2f\n",x1);
            else if (delt > 0)
                printf("x1=%.2f;x2=%.2f\n",x1,x2);
            else
            {
                if (a > 0)
                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",(-b)/(2*a),sqrt(delt)/(2*a),(-b)/(2*a),sqrt(delt));
                else
                    printf("x1=%.2f%.2fi;x2=%.2f+%.2fi\n",(-b)/(2*a),sqrt(delt)/(2*a),(-b)/(2*a),sqrt(delt));
            }
        }
    }
}
