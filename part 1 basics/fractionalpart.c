#include<stdio.h>
int main(){
    float num,fractional;
    int num1;
    printf("enter a number in decimal  \n");
    scanf("%f",&num);
    num1=num;
    fractional= num-num1;
    printf("the fractional part of the number %f is %f",num,fractional);

}