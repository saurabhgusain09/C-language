#include<stdio.h>
int main()
{
    int n;
    printf("enter the number you want\n");
    scanf("%d",&n);
    for (int  i =1; i <=(n*2)-1; i++)
    {
        for (int j =1; j <=(n*2)-1; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
}