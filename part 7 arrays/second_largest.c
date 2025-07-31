#include<stdio.h>
int main()
{   
    int arr[6]={2,4,60,5,7,12};
    int firL=arr[0];
    int secL=arr[1];
    for (int i = 0; i < 6; i++)
    {
        if(arr[i]>firL) firL = arr[i];
    }
    for (int i = 0; i < 6; i++)
    {
        if(arr[i]!=firL && arr[i]>secL) secL = arr[i];
    }
    
    
    
    printf("the second largest element of an array is : %d ",secL);
    return 0;

}