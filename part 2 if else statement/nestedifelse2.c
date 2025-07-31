#include<stdio.h>
int main()
{
    int num;
    printf("enter  the number \n");
    scanf("%d", &num);
    if (num%3==0||num%5==0)
    {
        if (num%15!=0)
      
        {
            printf("the number is divisible by 3 and 5 but not divisible by 15");
        }
        else
        {
            printf("the number is divisible by all these three numbers 3 , 5 and 15");
        }
        
    }
    else
    {
        printf("the number is not divisible by any three of them");
    }
    
}