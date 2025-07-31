#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    
    for (int i = 1; i <=n; i++)
    {  char a='A';
        for (int j = 1; j <=n-i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <=(2*i)-1; k++)
        { 
            printf("%c ",a);
            a=a+1;
        }
        printf("\n");
        
        
    }
    
}