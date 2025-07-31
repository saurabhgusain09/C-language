#include<stdio.h>
int logarthmic(int a, int b){
    if(b==0) return 1;
    int x= logarthmic(a,b/2);
    if(b%2==0) return x*x;
    if(b%2!=0) return x*x*a;
}
int main()
{
    int a,b;
    printf("enter the  value of a \n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    int power=logarthmic(a,b);
    printf("the answer is : %d",power);

}