#include<stdio.h>
int main()
{
    int n ;
    printf("enter the n th term you want\n");
    scanf("%d", &n);
    for (int i = 1; i <=(2*n-1); i+=2)
    {
        printf("%d ", i);
    }
    
}