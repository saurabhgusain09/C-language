#include<stdio.h>
void incresing( int i,int n){
    if (i>n) return;
    printf("%d\n",i);
    incresing(i=i+1,n);
    return;
    
    
}
int main()
{
    int n;
    printf("enter the nummber \n");
    scanf("%d",&n);
    incresing(1,n);
    return 0;
}