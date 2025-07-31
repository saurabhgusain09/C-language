#include<stdio.h>
int main()
{
    float a,b;
    char expression;
    printf("enter the first number\n");
    scanf("%f",&a);
    printf("which arithmetic operation you want to perform\n");
    scanf("%s",&expression);
    printf("enter the second number\n");
    scanf("%f",&b);

    switch (expression)
    {
    case '+':printf("%.2f",a+b);
        break;
    case '-':printf("%.2f",a-b);
        break;
    case '/':printf("%.2f",b/a);
        break;
    case '*':printf("%.2f",a*b);
        break;
    // case '%':printf("%f",b%a);
    //     break;
                                    
    default:printf("YOU ENTER INVALID arithmetic operation ");
        break;
    }
}