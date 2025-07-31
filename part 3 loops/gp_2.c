#include<stdio.h>
int main()
{
    int a=3;
    int n;
    printf("enter the n th terms you want\n");
    scanf("%d",&n);
    for (int  i = 1; i <=n; i++)
    {
        printf("%d ",a);
        a*=4;
    }
    
}