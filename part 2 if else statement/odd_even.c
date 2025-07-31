#include<stdio.h>
int main()
{
    int n;
    printf("enter a positive number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("the number is an even number");
    }
    else
    {
        printf("the number is an odd number");  
    }
}