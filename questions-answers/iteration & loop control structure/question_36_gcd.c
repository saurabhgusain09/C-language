#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the first number \n");
    scanf("%d",&a);
    printf("enter the second number \n");
    scanf("%d",&b);
    int min;
    min=(a<b)?a:b;
    int max=a*b;
    for (int i = min; i>=1; i--)
    {
        if (a%i==0 && b%i==0)
        {
            printf("the G.C.D is :\n %d",i);
            break;
        }
        
    }
    
}