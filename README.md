# 👑 The lost princess

 Um jogo de aventura em terminal desenvolvido em C, onde o jogador assume o papel de um herói que tem de atravessar um labirinto e enfrentar enigmas para conseguir salvar a princesa.

 O jogador começa com 3 vidas e deve ter cuidado com os vilões, pois uma resposta errada faz perder uma vida.

 O objetivo final é conseguir chegar até à princesa e completar o labirinto.

# Como jogar?

O jogador começa por escolher o nome do seu herói.
Depois da introdução da história, é apresentado um labirinto de 5x5.

- Movimentos:

|Tecla  | Ação |
|-------|-------|
|w      | Move para cima |
|a      | Move para a esquerda |
|s      | Move para baixo |
|d      | Move para a direita |

O jogador começa na posição H (Herói) e deve chegar à posição da Princesa (P).

# Símbolos
- "H" - Herói
- "P" - Princesa
- "#" - Paredes
- "." - Espaço livre

Durante o caminho podem aparecer vilões. Quando isso acontece, o jogador terá de enfrentar um enigma.
Uma resposta errada faz perder uma vida e se o jogador perder as 3 vidas o jogo acaba.

Também é possível escolher fugir do vilão, o que leva a um final alternativo, onde o herói é um cobarde e não salva a princesa. O jogo termina imediatamente.

# Estrutura do projeto

Ficheiro                  
| main.c                    | Menu, história e lógica principal do jogo |
| game.c / game.h           | Criação do mapa e dos - movimentos |
| viloes.c / viloes.h       | Seleção dos vilões e dos enigmas |
| vida.c /vida.h            | Sistema de vidas |
 
# Como compilar e executar o jogo
- Como compilar:
Na pasta onde estão os ficheiros .c, executar:

   gcc main.c game.c viloes.c vida.c -o jogo.exe

- Como executar:
Depois de compilar, executar:

   ./jogo
