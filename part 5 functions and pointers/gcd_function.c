#include<stdio.h>
int min(int a, int b){
    if (a>b)
    {
        return b;
    }
    else{
        return a;
    }
}
int gcd(int a, int b){ int r;
    for (int i = 1; i <=min(a,b); i++)
    {
        if(a%i==0&&b%i==0)
        r=i;
    } 
    return r;
}
int main()
{
    int a,b;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    int hcf=gcd(a,b);
    printf("the hcf/gcd of %d and %d is : %d",a,b,hcf);
   
}