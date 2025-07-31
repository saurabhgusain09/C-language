#include<stdio.h>
int main()
{   int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    int sum=0;
    int arr[n];
    printf("ente the values in an array\n");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for (int i = 0; i <n; i++)
    {
        sum+=arr[i];
    }
    printf("the sum of all the elments in the given array is :\n %d ",sum);
    return 0;
}