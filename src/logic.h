#include <stdio.h>
#include "players.h"

void logic()
{
    if(handPlayer1 == 1)
    {
        if(handPlayer2 == 3)
        {
            printf("\nPlayer 1 Win\n");
            system("pause");
            player1Points++;
            showPoints();
        }
        if(handPlayer2 == 2)
        {
            printf("\nPlayer 2 Win\n");
            system("pause");
            player2Points++;
            showPoints();
        }
        if(handPlayer2 == 1)
        {
            printf("\nDraw\n");
            system("pause");
            showPoints();
        }
    }
    if(handPlayer1 == 2)
    {
        if(handPlayer2 == 1)
        {
            printf("\nPlayer 1 Win\n");
            system("pause");
            player1Points++;
            showPoints();
        }
        if(handPlayer2 == 3)
        {
            printf("\nPlayer 2 Win\n");
            system("pause");
            player2Points++;
            showPoints();
        }
        if(handPlayer2 == 2)
        {
            printf("\nDraw\n");
            system("pause");
            showPoints();
        }
    }
    if(handPlayer1 == 3)
    {
        if(handPlayer2 == 2)
        {
            printf("\nPlayer 1 Win\n");
            system("pause");
            player1Points++;
            showPoints();
        }
        if(handPlayer2 == 1)
        {
            printf("\nPlayer 2 Win\n");
            system("pause");
            player2Points++;
            showPoints();
        }
        if(handPlayer2 == 3)
        {
            printf("\nDraw\n");
            system("pause");
            showPoints();
        }
    }
}

