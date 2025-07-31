#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon{
        char name[20];
        int hp;
        int attack;
        int speed;
    }pokemon;
    pokemon arr[3];
    strcpy(arr[0].name,"pikachu");
    arr[0].hp=113;
    arr[0].attack=100;
    arr[0].speed=150;

    strcpy(arr[1].name,"mewtow");
    arr[0].hp=143;
    arr[0].attack=80;
    arr[0].speed=130;

    strcpy(arr[2].name,"charizard");
    arr[0].hp=193;
    arr[0].attack=200;
    arr[0].speed=160;

    for (int i = 0; i <=2; i++)
    {
        printf(" the name is : %s\n",arr[i].name);
        printf("the hp is : %d\n",arr[i].hp);
        printf("the attack is : %d\n",arr[i].attack);
        printf("the speed is : %d\n",arr[i].speed);
    }
    

    return 0;
}