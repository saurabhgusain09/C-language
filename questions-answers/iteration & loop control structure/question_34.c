#include<stdio.h>
int main()
{
    int num,mod;
    printf("enter the number you want to sum of digits : \n");
    scanf("%d",&num);
    int sum=0;
    while (num>0)
    {
        mod=num%10;
        num/=10;
        sum+=mod;
    }
    printf("the sum of the digits is : %d",sum);
    return 0;
}