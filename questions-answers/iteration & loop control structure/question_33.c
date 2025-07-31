#include<stdio.h>
int factorial(int n, int f){
    for (int i = 1; i <=n; i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
    int num;
    printf("enter the number you want to factorial of : \n");
    scanf("%d",&num);
    int fact =1;
    int ans=factorial(num,fact);
    printf("the factorial of a number is : \n%d",ans);
    return 0;
}