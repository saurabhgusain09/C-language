#include<stdio.h>
int main()
{
    int f=0,s=1,next,n;
    printf("enter the number you want to print fibonaci series\n");
    scanf("%d",&n);
    for (int i = 1;i<=n; i++)
    {
        printf("%d\n",f);
        next=f+s;
        f=s;
        s=next;
    }
    
}