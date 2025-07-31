#include<stdio.h>
int main()
{
    int a , b, temp;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf(" before swapping is a = %d and b= %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf(" after swapping is a = %d and b= %d",a,b);

}