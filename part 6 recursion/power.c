#include<stdio.h>
int power(int a, int b){
    int pow=1;
    for (int  i =1; i <=b; i++)
    {
        pow*=a;
    }
    return pow;
    
}
int main()
{
    int a,b;
    printf("enter the number you want to calculate the power of \n");
    scanf("%d",&a);
    printf("enter the number how many power you want to calculate\n");
    scanf("%d",&b);
    int p = power(a,b);
    printf("the power is : %d",p);
    return 0;

}