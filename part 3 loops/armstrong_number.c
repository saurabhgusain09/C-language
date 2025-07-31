#include<stdio.h>
int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d", &n);
    int count =0;
    while (n!=0)
    {
        n%10;
        count++;
        n=n/10;
    }
    int num; int result=0;
    int power=1; int d= count;

    while (n!=0)
    {
       num=n%10;
       while (d!=0)
       {
        power=power*num;
        d--;
         result= result+power;
       }
      
       n=n/10; 
       
    }
    if (result==n)
    
        printf("the number %d is  armstrong number %d " , n , result);
    
    else
    printf("not a armstrong number ");

    
    
}