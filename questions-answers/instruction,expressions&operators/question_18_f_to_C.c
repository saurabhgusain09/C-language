#include<stdio.h>
int main()
{
    float fahrenheit;
    printf("enter the temp in fahrenheit : \n");
    scanf("%f",&fahrenheit);
    float celsius=(fahrenheit-32.0)*5.0/9.0;
    printf("the conversion of fahrenheit to celsius is : %f",celsius);
    return 0;
}