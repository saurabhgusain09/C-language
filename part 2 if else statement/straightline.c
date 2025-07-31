#include<stdio.h>
int main()
{
    int x1,x2,x3,y3,y1,y2;
    printf("enter the point x1 and x2 and x3\n");
    scanf("%d %d %d", &x1 , &x2 , &x3);
    printf("enter the point y1 and y2 and y3 \n");
    scanf("%d %d %d", &y1 , &y2 , &y3);
   
    int m1, m2;
    m1 = (y2-y2)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if (m1==m2)
    {
        printf("these all three points fall on a straight line");
    }
    else{
        printf("not a straight line");
    }

}