#include<stdio.h>
int factorial(int x){
    int fact=1;
    for (int  i =1; i <=x; i++)
    {
        fact*=i;
    }
    return fact;
}
int combination(int n , int r){
    int ncr =factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main()
{
    int n,r;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for (int  i = 0; i <=n; i++)
    {
        for (int  j =0; j <=i; j++)
        {
            int icj= combination(i,j);
            printf("%d  ", icj);
        }
        printf("\n");
    }
    
    // printf("enter the value of r\n");
    // scanf("%d",&r);
    // int result = combination(n,r);
    // printf("the ncr of a given numbers is : %d", result);
    // return 0;
 }