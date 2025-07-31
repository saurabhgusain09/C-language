#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    int marks[n];
   
    printf("enter the marks of each student\n");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("\n");
    for (int i = 0; i <n; i++)
    {
        if (marks[i]<35)
        {
            printf("%d\n",i);
        }
        
    }
    
    
}