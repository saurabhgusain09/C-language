#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements for an arrray\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
     }
     printf("the maximum number is :  %d ",max);

     
    
    
}