#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("enter the number you want the sum of:  \n");
    scanf("%d", &n);
    for (int  i = 1; i <=n; i++)
    {
        sum+=i;
    }
    printf("the sum of the number is %d\n", sum);
    
}