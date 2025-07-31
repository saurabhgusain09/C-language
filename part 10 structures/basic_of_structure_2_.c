#include<stdio.h>
int main()
{
    struct student
    {
        char name[20];
        int id;
        int roll_no;
    }s1,s2;
    
    strcpy(s1.name,"saurabh");
    s1.roll_no=1;
    s1.id=2305031;
    printf("student name is : %s\n",s1.name);
    printf("student roll no is : %d\n ",s1.roll_no);
    printf("student id is :  %d \n",s1.id);
}