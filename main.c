#include <stdio.h>
//#include <stdlib.h>
#include "game.h"

int main()
{
    iniciar_jogo();
    char nome[50];
    printf("Qual o nome do teu heroi? ");
    scanf("%49s", nome);

    printf("\nBem vinda, %s!\n\n", nome);
    
    char mapa[5][5];
    int linha=0;
    int coluna=0;

    init_mapa(mapa);


    char movimento;

    while(1)
    {
        //system("cls");

        print_mapa(mapa);
        printf("\nMovimento (W/A/S/D): ");
        scanf(" %c", &movimento);
        mover_player(mapa, &linha, &coluna, movimento);
        printf("\n");
    }
    return 0;
}