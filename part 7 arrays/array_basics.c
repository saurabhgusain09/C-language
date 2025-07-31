#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter the values in a array\n");
    for (int i = 0; i <5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the values of an array are :\n");
    for (int i = 0; i <5; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}