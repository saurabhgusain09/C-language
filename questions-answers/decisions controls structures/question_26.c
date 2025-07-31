#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d" ,&a);
    (a%2==0)?printf("the number is an even number"):printf("the number is an odd number");
    return 0;

}