#include<stdio.h>
int main()
{
    int arr[3]={1,2,3};
    int *ptr=&arr[0];
    int *ptr1=&arr[1];
    int *ptr2=&arr[2];
    int *ptr3=&arr[3];
    printf("%p\n",ptr);
    printf("%p\n",ptr1);
    printf("%p\n",ptr2);
    printf("%p\n",ptr3);
    
    
}