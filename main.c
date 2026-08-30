#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "viloes.h"
#include "vida.h"
#include "game.h"

void menu();
void historia(int parte);
void iniciar_jogo();

void menu()
{
    int opcao;
    while (1)
    {
        printf("\n\033[95m====================================\n");
        printf("        THE LOST PRINCESS");
        printf("\n====================================\033[0m\n");
        printf("1 - Jogar\n");
        printf("2 - Regras\n");
        printf("3 - Sair");
        printf("\n\033[95m====================================\033[0m\n");
        
        scanf("%d", &opcao);
        if (opcao==1)
        {
            iniciar_jogo();
        }
        else if(opcao==2)
        {
            printf("\n\033[34m============ REGRAS =============\033[0m\n");
            printf("Encontra a princesa no labirinto.\n");
            printf("Usa W/A/S/D para te moveres.\n");
            printf("Enfrenta os vilões e resolve os enigmas.\n");
            printf("Tens 3 vidas.\n");
            printf("\n\033[34m====================================\033[0m\n");
        }
    else if(opcao==3)
    {
        break;
    }
    else
    {
        printf("\nOpção inválida\n");
    }
} 
}

void historia(int parte)
{
    if (parte ==5)
    {
        return;
    }

    if(parte==0)
    {
        printf("\n\033[36m*NARRADOR*\033[0m");
        printf("\nAbres os olhos lentamente.");
    }
    else if(parte==1)
    {
        printf("\nEstás deitado no chão.");
    }
    else if(parte==2)
    {
        printf("\nLevantaste e olhas ao redor, estás numa floresta.");
    }
    else if(parte==3)
    {
        printf("\nOuves uma voz lá dentro.");
    }
    else if(parte==4)
    {
        printf("\n\033[33m*???*\033[0m");
        printf("\n\"Encontra a princesa\"\n");
    }
    historia(parte+1);

}


void iniciar_jogo()
{
    historia(0);

    char nome[50];
    printf("\nQual o nome do teu herói? ");
    scanf("%49s", nome);

    printf("\nOlá, \033[33m%s\033[0m!\n\n", nome);
    
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
            printf("\033[32m================================\n");
            printf("        PARABÉNS, \033[33m%s!\n\033[0m", nome);
            printf("\033[32m================================\033[0m\n\n");
            
            printf("Encontraste a princesa!\n\n");
            printf("Conseguiste atravessar o labirinto.\n");
            printf("e derrotar todos os inimigos.\n\n");
            printf("A princesa está salva!\n\n");

            printf("\033[32m           VITÓRIA!\n");
            printf("================================\033[0m\n");
            exit(0);
        }

        int numero = rand() % 2;
        
        if (numero == 0)
        {
            int vilao=escolher_vilao();
            if (vilao != -1)
            {
                printf("\n\033[36m*NARRADOR*\033[0m");
                printf("\nOH NÃO, ESTÃO A TAPAR A PASSAGEM!\n");
                if (enigmas(vilao)==0)
                {
                    exit (0);
                }
                if (verificar_vida() == 0)
                {
                    printf("\n\033[36m*NARRADOR*\033[0m");
                    printf("\nPerdeste todas as vidas.");
                    printf("\nParabéns falhaste e a princesa nunca foi salva.");
                    exit(0);
                }
            }  
        }
        printf("\n");
    }
}

int main()
{
    SetConsoleOutputCP(65001);
    menu();

    return 0;
}