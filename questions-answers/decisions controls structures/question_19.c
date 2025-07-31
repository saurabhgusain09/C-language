#include<stdio.h>
int main()
{
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    if (x<0)
    {
        printf("negative number ");
    }
    else if (x>0)
    {
        printf("number is positive");
    }
    else{
        printf("the number is equals to zeroo");
    }
    
    
    return 0;
}