#include<stdio.h>
int main()
{
    int base,height;
    printf("enter the height of a triangle : \n");
    scanf("%d",&height);
    printf("enter the base of a triangle : \n");
    scanf("%d",&base);
    float area = 1.0/2.0*base*height;
    printf("the area of triangle is : %.2f \n",area);
    return 0;
}