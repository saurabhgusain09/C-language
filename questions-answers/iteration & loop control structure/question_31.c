#include<stdio.h>
int main()
{
    int num;
    printf("enter the number for a table\n");
    scanf("%d",&num);
    printf("the table of a given number is : \n");
    for (int i = 1; i <=10; i++)
    {
        printf("%d\n",num*i);
    }
    return 0;
}