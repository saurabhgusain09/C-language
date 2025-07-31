#include<stdio.h>
int main()
{
    int arr[7]={2,5,7,9,1,3,6};
    int x=1;
    for (int i = 0; i < 7; i++)
    {
        if(x==arr[i]){
        printf("%d ",i);
        break;
        }
    }
    
}