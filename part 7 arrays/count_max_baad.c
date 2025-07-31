#include<stdio.h>
int main()
{
    int x;
    printf("enter the value of x\n");
    scanf("%d",&x);
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d elements of an array",n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);  
    }
    int count=0;
    for (int i = 0; i <n; i++)
    {
        if(arr[i]>x)
        count++;
    }
    printf("the total numbers of count is : %d",count);
    return 0;
}
