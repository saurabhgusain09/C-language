#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main()
{
    int a, b;
    printf("enter a \n");
    scanf("%d",&a);
    printf("enter b \n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("values after swapping number \n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

}