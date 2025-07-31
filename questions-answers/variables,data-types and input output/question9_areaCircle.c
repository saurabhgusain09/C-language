#include<stdio.h>
int main()
{
    float pi=3.14159;
    int radius;
    float area;
    printf("enter the radius of circle : \n");
    scanf("%d",&radius);
    area=pi*(radius*radius);
    printf("the area of circle is :  %f",area);
}