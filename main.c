#include <stdio.h>
#include <stdlib.h>
#include "viloes.h"
#include "vida.h"
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

        print_mapa(mapa);
        printf("\nAndar para (W/A/S/D): ");
        scanf(" %c", &movimento);
        mover_player(mapa, &linha, &coluna, movimento);

        if (encontrou_princesa(linha, coluna))
        {
            printf("================================\n");
            printf("        PARABENS, %s!\n", nome);
            printf("================================\n\n");
            
            printf("Encontraste a princesa!\n\n");
            printf("Conseguiste atravessar o labirinto\n");
            printf("e derrotar todos os inimigos.\n\n");
            printf("A princesa esta salva!\n\n");

            printf("           VITORIA!\n");
            printf("================================\n");
            break;
        }

        int numero = rand() % 2;
        
        if (numero == 0)
        {
            int vilao=escolher_vilao();
            if (vilao != -1)
            {
                printf("\nOH NAO, ESTAO A TAPAR A PASSAGEM!\n");
                if (enigmas(vilao)==0)
                {
                    break;
                }
                if (verificar_vida() == 0)
                {
                    printf("Perdeste todas as vidas.");
                    printf("\nParabens falhas-te e a princesa nunca foi salva.");
                    break;
                }
            }  
        }
        printf("\n");
    }
     return 0;
}