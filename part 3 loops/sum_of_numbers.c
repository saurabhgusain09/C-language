#include<stdio.h>
int main()
{
int n, sum =0, ld;
printf("enter the number you want the sum of : \n");
scanf("%d", &n);
while (n!=0)
{
    ld = n%10;
    sum = sum+ld;
    n=n/10;
}
printf("the sum of the number is \n %d", sum); 
}