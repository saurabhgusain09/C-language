#include<stdio.h>
int main()
{
    int a , b;
    printf("enter a \n");
    scanf("%d",&a);
    printf("enter b\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d \nb= %d ",a,b);

}