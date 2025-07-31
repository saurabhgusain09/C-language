#include<stdio.h>
int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    for (int  i = 1; i <=4; i++)
    {
        for (int i = 1; i <=n; i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
}