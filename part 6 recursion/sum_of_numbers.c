#include<stdio.h>
int sum( int n){
    if(n==0) return n;
    return n+sum(n-1);
}
int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    int s = sum(n);
    printf("the sum of the numbers is : %d",s);

    return 0;
}