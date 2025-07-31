#include<stdio.h>
int main()
{
    int num,rem,ans=0;
    printf("enter the number \n");
    scanf("%d",&num);
    while (num>0)
    {
        rem=num%10;
        ans*=10;
        ans+=rem;
        num=num/10;
    }
    printf("the reverse of the given number is : \n %d",ans);
    return 0;
}