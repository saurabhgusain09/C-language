#include<stdio.h>
int main()
{
    int num;
    printf("enter the number : \n");
    scanf("%d",&num);
    int ans=0;
    for (int i = 2; i <num; i++)
    {
        if (num%i==0)
        {
            ans=1;
        }
    }
    if (num==1){ printf("not prime number");
    return 0; }
    
    if(ans==0) printf("prime number");
    else printf(" not a prime number");
   
    
    

    
    return 0;
}