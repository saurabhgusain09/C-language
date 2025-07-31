#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first number\n");
    scanf("%d", &a);
     printf("enter the first number\n");
    scanf("%d", &b);
     printf("enter the first number\n");
    scanf("%d", &c);
    if (a>b)
    {
        if (a>c)
        {
            printf("%d is a biggest number",a);
        }
        else
        {
            printf("%d is a biggest number",c);
        }
        
    }
    else
    {
        if (b>c)
        {
             printf("%d is a biggest number",b);
        }
        else
        {
            printf("%d is a biggest number",c);
        }
        
    }
    
}