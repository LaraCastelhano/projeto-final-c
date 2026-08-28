#include <stdio.h>
#include "vida.h"

int vidas=3;

void perder_vida()
{
    vidas--;
    printf("\nPerdes-te uma vida!\n");
    printf("Vidas restantes: %d\n", vidas);
}

int verificar_vida()
{
    if (vidas<=0)
    {
        return 0;
    }
    return 1;
}