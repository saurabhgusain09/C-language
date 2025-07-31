#include<stdio.h>
void multi(int x , int y){
    printf("%d",x*y);
    return;
}
int main()
{
    int a,b;
    printf("enter the value of a \n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    multi(a,b);
    return 0;
}