#include<stdio.h>
int stairs(int n){
    if(n<=2) return n;
    return stairs(n-1)+stairs(n-2);
}
int main()
{
    int n;
    printf("enter the numbers of stairs\n");
    scanf("%d",&n);
    int path=stairs(n);
    printf("the total numbers of ways is : %d",path);
}