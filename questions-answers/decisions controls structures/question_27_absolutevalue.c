#include<stdio.h>
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    // (num<0)?printf("%d",-num):printf("%d",num);
    printf("%d is your absoulte value",(num<0? -num : num));
    return 0;
}