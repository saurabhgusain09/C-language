#include<stdio.h>
int main()
{
    struct pokemon
    {
        int speed;
        int attack;
        int hp;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.speed=100;
    pikachu.attack=55;
    pikachu.hp=100;
    pikachu.tier='A';
    
    printf("%d",pikachu.speed);
    
    return 0;
}