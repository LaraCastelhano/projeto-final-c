#include <stdio.h>

void init_mapa(char mapa[5][5]);
void print_mapa(char mapa[5][5]);

int main(void) {
    char mapa[5][5];
    init_mapa(mapa);
    print_mapa(mapa);

    return 0;
}

void init_mapa (char mapa[5][5])
{
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            mapa[i][j]='.';
        }
    }
}  

void print_mapa(char mapa[5][5])
{
    printf("\n");
    for(int i =0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf(" %c ", mapa[i][j]);

        }
        printf("\n");
    }
    
}