#include<stdio.h>
int main() {
    int n, count =0, power =1;
    printf("enter the number you want to check \n");
    scanf("%d" , &n);
    int num = n;
    int original = n;
    while (n!=0)
    {
        n=n/10;
        count ++;
        
    }
    int cnt = count;  int result= 0; int a; 
    while (num!=0)
    {
        a= num%10;
        while (cnt!=0)
        {
            power= power*a;
            cnt--;
        }
        result= result+power;
         cnt = count;
        num=num/10;
        power= 1;
    }


    if (original == result){
    
        printf("the number %d is an armstrong number " , result);
    }
    else
    {
    printf("it is not a armstrong number ");
    }
}
    



    // int num = count;
    // int a; int ans=0;
    // while (n!=0)
    // {
    //     a=n%10;
    //     for (int i = 1; i <=num; i++)
    //     {
    //         power= power*a;
    //     }
    //     n= n/10;
        
    // }
    
    
    
    
    
