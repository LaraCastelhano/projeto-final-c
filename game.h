#ifndef GAME_H
#define GAME_H

void iniciar_jogo();
void init_mapa(char[5][5]);
void print_mapa(char mapa[5][5]);
void mover_player(char mapa[5][5], int *linha, int *coluna, char movimento);
int encontrou_princesa(int linha, int coluna);

 #endif
