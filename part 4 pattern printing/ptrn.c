#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n \n");
    scanf("%d", &n);
    printf("\n");
    
    for (int  i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
}