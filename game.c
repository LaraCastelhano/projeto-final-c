#include <stdio.h>
#include "game.h"

void iniciar_jogo()
{

}

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
        if (*coluna < 4)
        {
            mapa[*linha][*coluna] = '.';
            *coluna = *coluna + 1;
            mapa[*linha][*coluna] = 'H';
        }
    }

    if (movimento == 'a')
    {
        if (*coluna > 0)
        {
            mapa[*linha][*coluna] = '.';
            *coluna = *coluna - 1;
            mapa[*linha][*coluna] = 'H';
        }
    }

    if (movimento == 'w')
    {
        if (*linha > 0)
        {
            mapa[*linha][*coluna] = '.';
            *linha = *linha - 1;
            mapa[*linha][*coluna] = 'H';
        }
    }

    if (movimento == 's')
    {
        if (*linha < 4)
        {
            mapa[*linha][*coluna] = '.';
            *linha = *linha + 1;
            mapa[*linha][*coluna] = 'H';
        }
    }
}
