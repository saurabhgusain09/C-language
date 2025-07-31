#include<stdio.h>
int main()
{
    float pi=3.14159;
    int radius;
    float circumference;
    printf("enter the radius of a circle : \n");
    scanf("%d",&radius);
    circumference = 2*pi*radius;
    printf("the circumference of a circle is : %f\n",circumference);
    return 0;
}