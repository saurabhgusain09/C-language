#include<stdio.h>
#include<string.h>
int main()
{   
    typedef struct pokemon
    {
        char name[20];
        int hp;
        int attack;
        int speed;
    }pokemon;

    typedef struct legendaryPokemon
    {
        pokemon normal;
        char ability[15];
    }legendaryPokemon;
    
    legendaryPokemon mewtow;
    strcpy(mewtow.ability,"pressure");
    strcpy(mewtow.normal.name,"saurabh");

    printf(" the name is : %s",mewtow.normal.name);
    
    
    return 0;
}