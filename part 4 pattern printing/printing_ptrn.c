#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    for (int i = 1; i <=(2*n)+1; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int  j =1; j <=n; j++)
    {
        for (int k =1; k <=nst; k++)
        {
            printf("*");
    
        }
        for (int l =1; l <=nsp; l++)
        {
            printf(" ");
    
        }
        for (int m =1; m <=nst; m++)
        {
            printf("*");
    
        }
        nst--;
        nsp+=2;
        printf("\n");

    }
    
    
}