#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers \n");
    scanf("%d"  "%d"  "%d", &a ,&b ,&c );
    if(a>b){
        if(c<a){
            printf("a is the greatest number\n");
        }
        else{
            printf("c is a greatest number");
        }
    }

        else if(b>c){
            printf("b is a greatest number");
        }
        else
        {
            printf("c is a greatest number");
        }
    
    return 0;

}