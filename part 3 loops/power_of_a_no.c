#include<stdio.h>
int main()
{
    int a,b , power=1;
    printf("enter the number you want the power of \n");
    scanf("%d", &a);
    printf("enter the number how many powers you want \n");
    scanf("%d",&b);
    for (int i = 1; i <=b; i++)
    {
        power = power*a;
    }
    printf("the power of a number %d is : %d",a, power);

}