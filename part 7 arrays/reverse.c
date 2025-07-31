#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter the elements for an array\n");
    for (int i = 0; i <5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the reverse of the array is \n");
    for (int i =4; i >=0; i--)
    {
        printf("%d\n",arr[i]);
    }
    
    
}