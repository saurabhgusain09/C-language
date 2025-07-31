#include<stdio.h>
#include<string.h>
int main()
{
    struct person
    {
        char name[20];
        int salary;
        int age;
    }a,b;
    strcpy(a.name,"saurabh");
    b.age=24;
    printf("the name of first person is :  %s\n",a.name);
    printf("the age of the second person is : %d\n",b.age);
    
}