#include<stdio.h>
#include<math.h>
int main()
{
    float principal,rate;
    int time;
    printf("enter the principal : \n");
    scanf("%f",&principal);
    printf("enter the rate : \n");
    scanf("%f",&rate);
    printf("enter the time : \n");
    scanf("%d",&time);
    float compountInt=principal*pow((1.0+rate/100.0),time);
    printf("the simple interest is : %.2f",compountInt);
    return 0;
}