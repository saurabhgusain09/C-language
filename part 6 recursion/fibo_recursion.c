#include<stdio.h>
int fibonaci(int n){
    if(n==1||n==2) return 1;
    return fibonaci(n-1)+fibonaci(n-2);
}
int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    printf("%d",fibonaci(n));

}