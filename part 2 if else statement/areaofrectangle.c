#include<stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf("enter the length of rectangle\n");
    scanf("%d",&l);
    printf("enter the breadth of rectangle\n");
    scanf("%d",&b);
    area= l*b;
    perimeter= 2*(l+b);
    if (area>perimeter)
    {
        printf("area is greater than perimeter");
    }
    else
    {
        printf("perimeter is greater than area");
    }
}