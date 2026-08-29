#include <stdio.h>
#include "game.h"


void init_mapa(char mapa[5][5])
{
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            mapa[i][j]='.';
        }
    }
    mapa[0][0]='H';
    mapa[4][4]='P';
    mapa[0][4] = '#';
    mapa[1][0] = '#';
    mapa[1][1] = '#';
    mapa[1][2] = '#';
    mapa[1][4] = '#';
    mapa[3][0] = '#';
    mapa[3][2] = '#';
    mapa[3][3] = '#';
    mapa[4][0] = '#';

}


void print_mapa(char mapa[5][5])
{
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            printf("%c", mapa[i][j]);
        }
        printf("\n");
    }

}

void mover_player(char mapa[5][5], int *linha, int *coluna, char movimento)
{
    if (movimento == 'd')
    {
        if (*coluna < 4 && mapa[*linha][*coluna + 1] != '#')
        {
            mapa[*linha][*coluna] = '.';
            *coluna = *coluna + 1;
            mapa[*linha][*coluna] = 'H';
        }
        else
        {
            printf("\nUps, parece que foste contra uma parede...\n");
        }
    }

    if (movimento == 'a')
    {
        if (*coluna > 0 && mapa[*linha][*coluna -1] !='#')
        {
            mapa[*linha][*coluna] = '.';
            *coluna = *coluna - 1;
            mapa[*linha][*coluna] = 'H';
        }
        else
        {
            printf("\nUps, parece que foste contra uma parede...\n");
        }
    }

    if (movimento == 'w')
    {
        if (*linha > 0 && mapa[*linha -1][*coluna] !='#')
        {
            mapa[*linha][*coluna] = '.';
            *linha = *linha - 1;
            mapa[*linha][*coluna] = 'H';
        }
        else
        {
            printf("\nUps, parece que foste contra uma parede...\n");
        }
    }

    if (movimento == 's')
    {
        if (*linha < 4 && mapa[*linha +1][*coluna] !='#')
        {
            mapa[*linha][*coluna] = '.';
            *linha = *linha + 1;
            mapa[*linha][*coluna] = 'H';
        }
        else
        {
            printf("\nUps, parece que foste contra uma parede...\n");
        }
    }
}

int encontrou_princesa(int linha, int coluna)
{
    if (linha == 4 && coluna == 4)
    {
        return 1;
    }

    return 0;
}