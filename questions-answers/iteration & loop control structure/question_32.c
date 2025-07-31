#include<stdio.h>
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    int sum=0;
    for (int i = 1; i <=num; i++)
    {
        if(i%2!=0)
        sum+=i;
    }
    printf("the sum of all odd number  is : %d",sum);
    return 0;
}