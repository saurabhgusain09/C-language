#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two numbers : \n");
    scanf("%d %d",&a,&b);
    int min;
     min = (a>b)? b:a;
    for (int i = min; i <=a*b; i++)
    {
        if (i%a==0 && i%b==0)
        {
            printf("the LCM of given number is :\n %d",i);
            break;
        }
        
    }
    
    return 0;
}