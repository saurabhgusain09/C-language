#include<stdio.h>
int main()
{
    int first =1, second = 1 , next , n;
    printf("enter the n th term you want to print \n");
    scanf("%d",&n);
    for (int  i = 1; i <=n; i++)
    {  
        next= first+second;
        
        printf(" the number of %d  fibonacci is  : %d \n",i, first );
        // printf("%d ",second);
        first=second;
        second=next;
        

    }
    
}