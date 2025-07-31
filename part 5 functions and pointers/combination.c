#include<stdio.h>
int combination(int n , int r){
    int factn=1, factr=1,factrn=1;
    int r_n= n-r;
    for (int i =1; i <=n; i++)
    {
        factn*=i;
    }
    for (int i =1; i <=r; i++)
    {
        factr*=i;
    }
    for (int i =1; i <=r_n; i++)
    {
        factrn*=i;
    }
    int res = factn / (factr*factrn);
    return res;
    
}
int main()
{
    int n, r;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter the value of r\n");
    scanf("%d",&r);
    int ans=combination(n,r);
    printf("the answer is : %d" , ans);

    return 0;
}