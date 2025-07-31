#include<stdio.h>
void greeting(int n){
    if (n==0) return;
    printf("good morning guys welcome to my youtube channel\n");
    greeting(n-1);
    return;
}
int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    greeting(n);
    return 0;

}