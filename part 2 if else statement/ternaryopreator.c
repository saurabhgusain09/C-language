#include<stdio.h>
int main()
{
    int n;
    printf("enter the number : \n");
    scanf("%d" , &n);
    n%2==0? printf("n is an even number") : printf("n is an odd number");
}