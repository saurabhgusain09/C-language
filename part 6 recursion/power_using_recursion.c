#include<stdio.h>
int power(int a, int b , int p){
    if (b==0) return p;
    return power(a,b-1,p*a);
    
}
int main()
{
    int a ,b,p=1;
    printf("enter the number\n");
    scanf("%d",&a);
    printf("enter number of powers\n");
    scanf("%d",&b);
    int pow=power(a,b,p);
    printf("the answer is : %d",pow);
    return 0; 

}