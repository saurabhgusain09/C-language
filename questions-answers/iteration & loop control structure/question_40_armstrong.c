#include<stdio.h>
int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    int count=0;
    int copy=n;
    while (copy!=0)
    {
        copy/=10;
        count++;
    }
    copy=n;
    int d= count;
    int result=0;
    while (copy!=0)
    {
        int product=1;
        int rem=copy%10;
        while (d!=0)
        {
            product*=rem;
            d--;
        }
        d=count;
        result+=product;
        copy/=10;
    }
    if(result==n) printf("%d is an armstrong number ",result);
    else printf("not an armstrong number");
    
    return 0;
}