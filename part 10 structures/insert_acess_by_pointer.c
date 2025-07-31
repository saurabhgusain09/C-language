#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct person{
        int age;
        float weight;
    }person;
    person p1;  
    person *x=&p1;
    printf("%p",x);
}