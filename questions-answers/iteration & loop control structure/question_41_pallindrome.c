#include<stdio.h>
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    int orginal_num=n;
    int result=0;
    while (n!=0)
    {
        int rem=n%10;
        result*=10;
        result+=rem;
        n/=10;
    }
    if(result==orginal_num) printf("the number is an pallindrome number");
    else printf("the number is not an pallindrome number");
    return 0;
}