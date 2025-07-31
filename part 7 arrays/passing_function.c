#include<stdio.h>
void fun(int arr[]){
    for (int  i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    return;
}
int main()
{
    int arr[5]={1,3,2,4,5};
    fun(arr);
}