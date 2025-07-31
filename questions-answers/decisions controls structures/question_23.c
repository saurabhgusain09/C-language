#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks\n");
    scanf("%d",&marks);
    if (marks>90 )
    {
        printf("A grade");
    }
    else if (marks<=90 && marks>=75)
    {
        printf("B grade");
    }
    else if (marks<75 && marks>=60)
    {
        printf("C grade");
    }
    else if (marks<60 && marks>=30)
    {
        printf("D grade");
    }
    else{
        printf("F grade");
    }
    
    
    return 0;
}