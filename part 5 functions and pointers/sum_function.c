#include<stdio.h>
int add(int x, int y){
    return x+y;
}
int main()
{
    int a , b;
    printf("enter the value of a \n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("the sum of a and b is %d \n",sum);
    return 0;
}