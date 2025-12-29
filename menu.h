#include <stdio.h>
#include <stdlib.h>
#include "players.h"

int rounds;

void clearScreen()
{
    system("cls");
}

void pause()
{
    system("pause");
}

void showPoints()
{
    clearScreen();
    printf("---Points---\nPlayer1: %d\nPlayer2: %d\n", player1Points, player2Points);
    pause();
}

void roundsPrompt()
{
    printf("How many rounds do you wanna play: ");
    scanf("%d", &rounds);
}

void menu() 
{
    printf("--------------------\n");
    printf("Rock, Paper, Scissor\n");
    printf("--------------------\n");
    printf("Choose:\n");
    printf("1 - Rock\n");
    printf("2 - Paper\n");
    printf("3 - Scissor\n");
}