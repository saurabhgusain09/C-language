#include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if (num>99&&num<999)
    {
       printf("it is three digit number");
    }
    else{
        printf("not a three digit number");
    }
}