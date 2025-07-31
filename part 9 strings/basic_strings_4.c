#include<stdio.h>
#include<strings.h>
int main()
{   
    char str[50];
    printf("enter your sentence\n");
    //first method is below
    // gets(str);
    // printf("%s",str);
    //here is the second method below
    scanf("%[^\n]s",str);
    printf("%s",str);
    return 0;
}