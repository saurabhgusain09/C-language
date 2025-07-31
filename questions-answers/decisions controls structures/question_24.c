#include<stdio.h>
int main()
{
    int age;
    printf("enter the age\n");
    scanf("%d",&age);
    if (age>=60)
    {
        printf("senior ");
    }
    else if (age>20)
    {
        printf("adult");
    }
    else if (age>13)
    {
        printf("teen");
    }
    else{
        printf("child");
    }
    
    
    
    
    
    
   
    
    return 0;
}