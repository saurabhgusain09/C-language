#include<stdio.h>
#include<string.h>
 typedef struct pokemon
{
    int hp;
    char name[20];
    int speed;
    int attack;
}pokemon;
int main()
{
    pokemon pikachu;
    pokemon* x=&pikachu;
    printf("%p",x);
}