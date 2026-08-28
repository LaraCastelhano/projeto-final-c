#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "viloes.h"

int viloes_usados[4]={0,0,0,0};
int numero_viloes=0;
int escolha;

int escolher_vilao()
{
    int vilao;
    if(numero_viloes==3)
    {
        return-1;
    }
    do
    {
        vilao= rand()%3;
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
        printf("\n====================================\n");
        printf("        UM VILAO APARECEU!");
        printf("\n====================================\n");
        printf("Para me derrotares teras de responder corretamente a um enigma.\n");
        
        printf("1 - fugir\n");
        printf("2 - Responder\n");
        scanf("%d", &escolha);
        if (escolha == 1)
        {
            printf("\nParabens fos-te um cobarde e a princesa nunca foi salva.");
            return 0;
        }
        
        printf("\nQuanto mais escuro esta mais me ves, o que sou eu?\n");
        scanf("%49s", resposta);
           
        for (int i = 0; resposta[i] != '\0'; i++)
        {
            resposta[i] = tolower(resposta[i]);
        }
        
        if (strcmp(resposta, "estrela") == 0)
        {
            printf("\nResposta correta!\n");
            printf("Vilao derrotado!");
        }
        else
        {
            printf("Resposta errada...");
            printf("O vilao esta a rir-se de ti");
        }

    }
    if (vilao ==1)
    {
        printf("\n====================================\n");
        printf("        UM VILAO APARECEU!");
        printf("\n====================================\n");
        printf("Para me derrotares teras de responder corretamente a um enigma.\n");

        printf("1 - fugir\n");
        printf("2 - Responder\n");
        scanf("%d", &escolha);
        if (escolha == 1)
        {
            printf("\nParabens falhas-te e a princesa nunca foi salva.");
            return 0;
        }
        

        printf("\nSigo te para onde quer que vas, mas desapareco quando a luz acaba. O que sou eu?\n");
        
        scanf("%49s", resposta);
        
        for (int i = 0; resposta[i] != '\0'; i++)
        {
            resposta[i] = tolower(resposta[i]);
        }
        
        if (strcmp(resposta, "sombra") == 0)
        {
            printf("\nResposta correta!\n");
            printf("Vilao derrotado!");
        }
        else
        {
            printf("Resposta errada...");
            printf("O vilao humilhou-te");
        }

    }
    if (vilao ==2)
    {
        printf("\n====================================\n");
        printf("        UM VILAO APARECEU!");
        printf("\n====================================\n");
        printf("Para me derrotares teras de responder corretamente a um enigma.\n");
        printf("1 - fugir\n");
        printf("2 - Responder\n");
        scanf("%d", &escolha);
        if (escolha == 1)
        {
            printf("\nParabens falhas-te e a princesa nunca foi salva.");
            return 0;
        }
        
        printf("\nTem pescoco e nao tem cabeaa, tem braaos e nao tem maos, tem corpo e nao tem pernas. O que sou eu?\n");
        
        scanf("%49s", resposta);
        
        for (int i = 0; resposta[i] != '\0'; i++)
        {
            resposta[i] = tolower(resposta[i]);
        }
        
        if (strcmp(resposta, "camisa") == 0||
            strcmp(resposta, "a camisa") == 0||
            strcmp(resposta, "uma camisa") == 0)
        {
            printf("\nResposta correta!\n");
            printf("Vilao derrotado!");
        }
        else
        {
            printf("Resposta errada...\n");
            printf("O vilao fez te chorar que nem um bebezao.");
        }

    }

    
}