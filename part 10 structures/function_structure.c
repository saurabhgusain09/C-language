#include<stdio.h>
#include<string.h>
 typedef struct pokemon
{
    int hp;
    char name[20];
    int speed;
    int attack;
}pokemon;
void pooki(pokemon p){
    printf("%d",p.attack);
    return;
}
int main()
{
    pokemon pikachu;
    pikachu.attack=100;
    pooki(pikachu);
}
