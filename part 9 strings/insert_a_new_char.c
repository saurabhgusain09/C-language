#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="college";
printf("%s\n",str);
for (int i =6; i >=2; i--)
{
    str[i+1]=str[i];
}
str[2]='s';
printf("%s",str);
    return 0;
}
