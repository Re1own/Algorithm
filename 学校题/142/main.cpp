#include<stdio.h>
int main()
{
   int a;
   float b,c,d,e,f,g;
   int k[4]={0};
   printf("Enter paycode ( -1 to end ):\n");
    while(scanf("%d",&a)&&a!=-1)
    {
    switch(a){
case 1:
    printf("Manager selected.\nEnter weekly salary:\n");
    scanf("%f",&b);
    printf("The manager's pay is $%.2f\n\n",b);
    k[0]++;
    break;
case 2:
    printf("Hourly worker selected.\nEnter the hourly salary:\n");
    scanf("%f",&c);
    printf("Enter the total hours worked:\n");
    scanf("%f",&d);
    if(d>40){
            printf("Worker worked %.1f overtime hours.\n",d-40.0);
        d=40*c+(d-40)*c*1.5; printf("The worker's pay is $%.2f\n\n",d);k[1]++;break;}
    else {
        printf("The worker's pay is $%.2f\n\n",c*d);k[1]++;break;
    }
case 3:
    printf("Commission worker selected.\nEnter gross weekly sales:\n");
    scanf("%f",&e);
    printf("The commission worker's pay is $%.2f\n\n",250+e*0.05);k[2]++;break;
case 4:
    printf("Pieceworker selected.\nEnter number of pieces:\n");
    scanf("%f",&f);
    printf("Enter wage per piece:\n");
    scanf("%f",&g);
    printf("The pieceworker's pay is $%.2f\n\n",f*g);k[3]++;break;
default:
    printf("Invalid pay code.\n\n");
    break;
    }
     printf("Enter paycode ( -1 to end ):\n");
    }
    printf("\n");
    printf("Total number of managers paid          : %d\n",k[0]);
    printf("Total number of hourly workers paid    : %d\n",k[1]);
    printf("Total number of commission workers paid: %d\n",k[2]);
    printf("Total number of pieceworkers paid      : %d\n",k[3]);
    return 0;
}
