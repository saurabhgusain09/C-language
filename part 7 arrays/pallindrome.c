#include<stdio.h>
int pallindrome(int arr[]){
    int i =0;
    int j=4;
    while (i<=j)
    {
        if (arr[i]!=arr[j]) {
        return 0;}
        i++;
        j--;
    }
    return 1;
    
}
int main()
{   
    int arr[5]={1,2,3,2,1};
    if (pallindrome(arr)==1)
    {
        printf("palindrome array");
    }
    else
    printf("not a palindrome array");
    
    return 0;
}