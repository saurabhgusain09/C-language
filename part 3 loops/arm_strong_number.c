#include<stdio.h>
int main()
{
    int n , count =0, result=0, original , num, a, power=1;
    printf("enter the number you want to check \n");
    scanf("%d" , &n);
    num =n;
    original= n;
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    
    while (num!=0)
    {
        a= num%10;
        for (int  i = 1; i <= count; i++)
        {
            power= power*a;
        }
        result= result+power;
        num=num/10;
        power=1;
       
        
    }
    if (result==original)
    {
        printf("the number %d is an armstrong number ", original);
    }
    else
    {
        printf("the number is not an armstrong number");
    }

    
    
    
}