#include<stdio.h>
int main()
{
    int marks;
    printf("enter the student's marks \n");
    scanf("%d",&marks);
    marks>80? printf("high") 
            : (marks>50 ? printf("moderate")
                        : printf("low") );
    return 0;
}