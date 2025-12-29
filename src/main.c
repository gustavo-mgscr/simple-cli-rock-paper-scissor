#include <stdio.h>
#include "menu.h"
#include "logic.h"
#include "players.h"

void main()
{
    roundsPrompt();

    clearScreen();

    while(rounds)
    {
        menu();
        scanf("%d", &handPlayer1);
        clearScreen();
        menu();
        scanf("%d", &handPlayer2);
        clearScreen();
        logic();
        rounds--;
    }
}

