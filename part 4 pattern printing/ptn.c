#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    // int a=0;
    for (int  i = 1; i <=n; i++)
    {  int a=0;
        for (int j = 1; j <=n; j++)
        {
            // int a=0;
            printf("%d ",a+j);
            a++;
        }
        printf("\n");
        
    }
    
}