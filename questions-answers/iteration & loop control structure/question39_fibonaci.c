#include<stdio.h>
int main()
{
    int num;
    printf("enter the number you want \n");
    scanf("%d",&num);
    int n1=0,n2=1,next;
    for (int i = 1; i <=num; i++)
    {

        printf("%d  ",n1);
        next=n1+n2;
        n1=n2;

        n2=next;

    }
    
    return 0;
}