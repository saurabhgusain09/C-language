#include<stdio.h>
void greeting(int n){
    for (int i =1; i <=n; i++)
    {
        printf("good morning guys welcome to my youtube channel\n");
    }
    return;
}
int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    greeting(n);
}