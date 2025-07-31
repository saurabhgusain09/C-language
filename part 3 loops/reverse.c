#include<stdio.h>
int main()
{
    int n, r=0, ld;
    printf("enter the number you want the reverse of \n");
    scanf("%d", &n);
    
    while (n!=0)
    {   
        ld= n%10;
        n=n/10;
        r=(r*10)+ld;
       
        
    }
    printf("the reverse of the number : %d  " , r);
    
    
}