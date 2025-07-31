#include<stdio.h>
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
    float simpleInt=(principal*rate*time)/100.0;
    printf("the simple interest is : %.2f",simpleInt);
    return 0;
}