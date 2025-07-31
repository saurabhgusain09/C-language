#include<stdio.h>
int main()
{
    int a , b, temp;
    printf("enter value of a \n");
    scanf("%d",&a);
    printf("enter value of b \n");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("the value of a and b after swapping \n");
    printf(" value of a : %d \n",a);
    
    printf(" value of b : %d \n",b);
    
    return 0;
}