#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    int arr[n];
    for (int  i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=INT_MAX;
    for (int  i = 0; i <n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    printf("the minimum number is : %d",min);
    
}