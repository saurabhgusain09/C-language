#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of an integer a : \n");
    scanf("%d",&a);
    float b = (float)a;
    float ff=a;
    printf("the integer value of is : %d\n",a);
    printf("the float value is : %f\n",b);
    printf("the implicit conversion is : %f\n",ff);
    return 0;
}