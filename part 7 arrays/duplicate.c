#include<stdio.h>
int main()
{
    int arr[7]={1,2,3,4,1,5,7};
    for (int i = 0; i < 7; i++)
    {
        for (int j = i+1; j < 7; j++)
        {
            if(arr[i]==arr[j])
            printf("duplicate element is present here : %d",arr[i]);
        }
        
    }
    
}