#include<stdio.h>
int main()
{
    int n;
    printf("enter the  value of n\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i-1; j++)
        {
            printf("  ");
        }
        for (int  k =1; k <=(n+1)-i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}