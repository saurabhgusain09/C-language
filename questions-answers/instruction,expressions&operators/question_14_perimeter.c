#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the first side : \n");
    scanf("%d",&a);
    printf("enter the second side : \n");
    scanf("%d",&b);
    printf("enter the third side : \n");
    scanf("%d",&c);
    printf("enter the forth side : \n");
    scanf("%d",&d);
    int perimeter = a+b+c+d;
    printf("the perimeter is : %d",perimeter);
    return 0;
}