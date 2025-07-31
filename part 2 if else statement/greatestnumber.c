#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter three number\n");
    scanf("%d %d %d",&num1 , &num2 , &num3);
    if (num1>num2&&num1>num3)
    {
        printf("num 1 is greatest number");
    }
    else if (num2>num1&&num2>num3)
    {
        printf("num 2 is greatest number");
    }
    else {
        printf("num 3 is greatest number");
    }
    
    

}