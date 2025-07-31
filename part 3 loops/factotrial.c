#include<stdio.h>
int main()
{
    int n, fact=1;
    printf("enter the number you want the factorial of \n");
    scanf("%d", &n);
    for (int  i = 1; i<=n; i++)
    {
        fact= fact*i;
        printf("the factorial of a number %d is : %d \n ",i, fact);
    }
    
}