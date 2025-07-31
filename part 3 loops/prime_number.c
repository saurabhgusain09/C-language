#include<stdio.h>
int main() 
{
    int n, a=0;
    printf("enter the number\n");
    scanf("%d", &n);
     if (n==1){
        printf(" the number is neither prime number nor composite number");
        return 0;
     }
    
    for (int i = 2; i <= (n-1); i++)
    {
        if (n%i==0)
        { 
            a=1;
            break;
        }
        
    }
   
      if (a==0)
    {
        printf("the number is a prime number");
    }
    else
    {
        printf("the number is a composite number");
    }
    
    
    
}