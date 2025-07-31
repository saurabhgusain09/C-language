#include<stdio.h>
int factorial(int n){
    if (n==1 || n==0) return 1; //base case
    return n*factorial(n-1);
}
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("the factorial of a number %d is : %d",n, fact);
    return 0;
}
