#include<stdio.h>
int main() {
    int n;
    printf("enter the n th term you want the sum of  \n");
    scanf("%d", &n);
     int sum =0;
    for (int  i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("the sum of the numbers of : %d  ", sum);
    
}