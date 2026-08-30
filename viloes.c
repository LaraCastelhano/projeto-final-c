#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "viloes.h"
#include "vida.h"

int viloes_usados[4]={0,0,0,0};
int numero_viloes=0;
int escolha;

int escolher_vilao()
{
    int vilao;
    if(numero_viloes==4)
    {
        return-1;
    }
    do
    {
        vilao= rand()%4;
    }
    while (viloes_usados[vilao]==1);

    viloes_usados[vilao]=1;
    numero_viloes++;
    return vilao;
}


int enigmas(int vilao)
{
    char resposta[50];

    if (vilao ==0)
    {
        printf("\n\033[31m====================================\n");
        printf("        UM VILÃO APARECEU!");
        printf("\n====================================\033[0m\n");

        printf("\n\033[31m*VILÃO*\033[0m");
        printf("\nPara derrotares-me terás de responder corretamente a um enigma.\n");
        
        printf("1 - fugir\n");
        printf("2 - Responder\n");
        scanf("%d", &escolha);

        if (escolha == 1)
        {
            printf("\n\033[36m*NARRADOR*\033[0m");
            printf("\nParabéns foste um cobarde e a princesa nunca foi salva.");
            return 0;
        }
        printf("\n\033[31m*VILÃO*\033[0m");
        printf("\nQuanto mais escuro está, mais me vês. O que sou eu?\n");
        scanf("%49s", resposta);
           
        for (int i = 0; resposta[i] != '\0'; i++)
        {
            resposta[i] = tolower(resposta[i]);
        }
        
        if (strcmp(resposta, "estrela") == 0)
        {
            printf("\n\033[36m*NARRADOR*\033[0m");
            printf("\nResposta correta!");
            printf("\nVilão derrotado!\n");
            verificar_vida();
        }
        else
        {
            printf("\n\033[36m*NARRADOR*\033[0m");
            printf("\nResposta errada...\n");
            printf("\nO vilão está a rir-se de ti.\n");
            perder_vida();
        }

    }
    if (vilao ==1)
    {
        printf("\n\033[31m====================================\n");
        printf("        UM VILÃO APARECEU!");
        printf("\n====================================\033[0m\n");

        printf("\n\033[31m*VILAO*\033[0m");
        printf("\nPara derrotares-me terás de responder corretamente a um enigma.\n");

        printf("1 - fugir\n");
        printf("2 - Responder\n");
        scanf("%d", &escolha);
        if (escolha == 1)
        {
            printf("\n\033[36m*NARRADOR*\033[0m");
            printf("\nParabéns foste um cobarde e a princesa nunca foi salva.");
            return 0;
        }

        printf("\n\033[31m*VILÃO*\033[0m");
        printf("\nSigo-te para onde quer que vás, mas desapareço quando a luz acaba. O que sou eu?\n");
        
        scanf("%49s", resposta);
        
        for (int i = 0; resposta[i] != '\0'; i++)
        {
            resposta[i] = tolower(resposta[i]);
        }
        
        if (strcmp(resposta, "sombra") == 0)
        {
            printf("\n\033[36m*NARRADOR*\033[0m");
            printf("\nResposta correta!");
            printf("\nVilão derrotado!\n");
            verificar_vida();
            
        }
        else
        {
            printf("\n\033[36m*NARRADOR*\033[0m");
            printf("\nResposta errada...\n");
            printf("\nO vilão humilhou-te.\n");
            perder_vida();
        }

    }
    if (vilao ==2)
    {
        printf("\n\033[31m====================================\n");
        printf("        UM VILÃO APARECEU!");
        printf("\n====================================\033[0m\n");

        printf("\n\033[31m*VILÃO*\033[0m");
        printf("\nPara derrotares-me terás de responder corretamente a um enigma.\n");

        printf("1 - fugir\n");
        printf("2 - Responder\n");
        scanf("%d", &escolha);
        if (escolha == 1)
        {
            printf("\n\033[36m*NARRADOR*\033[0m");
            printf("\nParabéns foste um cobarde e a princesa nunca foi salva.");
            return 0;
        }
        
        printf("\n\033[31m*VILAO*\033[0m");
        printf("\nTem pescoço e não tem cabeça, tem braços e não tem mãos, tem corpo e não tem pernas. O que sou eu?\n");
        
        scanf("%49s", resposta);
        
        for (int i = 0; resposta[i] != '\0'; i++)
        {
            resposta[i] = tolower(resposta[i]);
        }
        
        if (strcmp(resposta, "camisa") == 0)
        {
            printf("\n\033[36m*NARRADOR*\033[0m");
            printf("\nResposta correta!");
            printf("\nVilão derrotado!\n");
            verificar_vida();
        }
        else
        {
            printf("\n\033[36m*NARRADOR*\033[0m");
            printf("\nResposta errada...\n");
            printf("\nO vilão fez te chorar como um bebe.\n");
            perder_vida();
        }

    }
    if (vilao ==3)
    {
        printf("\n\033[31m====================================\n");
        printf("        UM VILÃO APARECEU!");
        printf("\n====================================\033[0m\n");

        printf("\n\033[31m*VILÃO*\033[0m");
        printf("\nPara derrotares-me terás de responder corretamente a um enigma.\n");

        printf("1 - fugir\n");
        printf("2 - Responder\n");
        scanf("%d", &escolha);
        if (escolha == 1)
        {
            printf("\n\033[36m*NARRADOR*\033[0m");
            printf("\nParabéns foste um cobarde e a princesa nunca foi salva.");
            return 0;
        }
        
        printf("\n\033[31m*VILAO*\033[0m");
        printf("\nO que é que tem capa, mas não é o Super-Homem, tem folhas, mas não é uma árvore, tem orelhas, mas não á gente, á surdo, mas conta tudo?\n");
        
        scanf("%49s", resposta);
        
        for (int i = 0; resposta[i] != '\0'; i++)
        {
            resposta[i] = tolower(resposta[i]);
        }
        
        if (strcmp(resposta, "livro") == 0)
        {
            printf("\n\033[36m*NARRADOR*\033[0m");
            printf("\nResposta correta!");
            printf("\nVilão derrotado!\n");
            verificar_vida();
        }
        else
        {
            printf("\n\033[36m*NARRADOR*\033[0m");
            printf("\nResposta errada...\n");
            printf("\nO vilão ficou a olhar para ti em silêncio. Que vergonha...\n");
            perder_vida();
        }

    }
    return 1;
}