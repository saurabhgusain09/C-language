#include<stdio.h>
int main()
{
    int sumE=0,sumO=0,sum;
    int arr[6]={1,2,5,7,9,25};
    for (int i = 0; i < 6; i++)
    {
        if(i%2==0) sumE+=arr[i];
        else sumO+=arr[i];
    }
    sum = sumE-sumO;
    printf("the difference between sum of even to the odd is : %d",sum);
}