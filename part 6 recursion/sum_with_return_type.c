#include<stdio.h>
int sum(int s, int n){
    if(n==0) return s;
    return sum(s+n,n-1);
}
int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    int s = sum(0,n);
    printf("the sum of the numbers is : %d",s);

    return 0;
}