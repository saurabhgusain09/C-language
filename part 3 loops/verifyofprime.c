#include<stdio.h>
int main()
{
    int a =4;
    int b=0;
    for (int i = 1; i <=a; i++)
    {
       if (a%5==0)
       {
        b=1;
        break;
       }
       
    }
    printf("%d", b);
    
}