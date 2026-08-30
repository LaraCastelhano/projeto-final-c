## SESSÃO 1 - IDEIA E PLANEAMENTO DO PROJETO - 24/08/2026

Nesta primeira sessão eu comecei por organizar todas as minhas ideias e planear como iria começar, uma vez que a minha experiência em C é pouca.

Depois de pensar em algumas opções concluí que queria realizar um jogo de aventura com enigmas e que continha um labirinto em que o utilizador, que seria o herói, tinha o objetivo de salvar a princesa e derrotar os vilões resolvendo os seus enigmas.

Defini que o jogo teria:

- um labirinto representado por uma matriz 5 por 5, pelo qual o jogador se desloca até chegar à princesa.
- vilões que bloqueiam o caminho e desafiam o jogador com enigmas. Se acertar, passa mas se errar ou demorar demasiado tempo a responder, perde uma vida.
- a opção de fugir de um vilão em vez de enfrentar o enigma, levando a um final alternativo.
- texto colorido no terminal para distinguir as vozes do narrador, do herói, dos vilões e da princesa, dando mais identidade a cada personagem.
- pelo menos dois finais possíveis: salvar a princesa, ou falhar.
 
 **Funcionalidades implementadas hoje:**
- Configurei o Git e o repositório no GitHub.
- Criei o ficheiro main.c.

**Maior dificuldade encontrada e como resolvi (ou não resolvi):**
- O meu antivírus começou a impedir o meu programa de rodar, com a ajuda do formador criámos uma extensão de exceção para a pasta do projeto.

**Próximo passo planeado:**
- Começar a organizar as ideias do projeto, para começar a realizar o código.
  
**Linhas de código escritas hoje (estimativa):**
- Aproximadamente 38 linhas escritas.

## SESSÃO 2 - COMEÇO DO PROJETO - 25/08/2026

 **Funcionalidades implementadas hoje:**
- A criação do ficheiro game.c e game.h. 
- A criação do herói e do labirinto, juntamente com os movimentos do personagem.

**Maior dificuldade encontrada e como resolvi (ou não resolvi):**
- Fazer o labirinto atualizar-se sem se repetir sempre que houvesse um movimento, Problema não resolvido.

**Próximo passo planeado:**
- Adicionar o final de vitória quando o herói chegar à princesa.
  
**Linhas de código escritas hoje (estimativa):**
- Aproximadamente 70 linhas escritas.

## SESSÃO 3 - Meio do projeto - 25/08/2026 - 27/08/2026

 **Funcionalidades implementadas hoje:**
- A criação dos ficheiros viloes.c e viloes.h para as funcionalidades dos vilões.
- A criação de um enigma para cada vilão.

**Maior dificuldade encontrada e como resolvi (ou não resolvi):**
- Colocar tempo para responder cada enigma e caso o tempo acabasse perder o jogo. Problema não resolvido.

**Próximo passo planeado:**
- Adicionar as vidas.
  
**Linhas de código escritas hoje (estimativa):**
- Aproximadamente 78 linhas escritas.

## SESSÃO 4 - Fase final do projeto - 28/08/2026 - 30/08/2026

 **Funcionalidades implementadas hoje:**
- A criação dos ficheiros vida.c e vida.h
- Implementação do sistema de vidas.
- Criação de um menu.
- Implementação das respetivas cores para cada personagem utilizando códigos ANSI.
- Implementação dos acentos e caracteres especiais no texto apresentado no terminal.

**Maior dificuldade encontrada e como resolvi (ou não resolvi):**
- Colocar tempo para responder cada enigma e caso o tempo acabasse perder o jogo, não resolvi.

**Próximo passo planeado:**
- Últimos retoques no código.
  
**Linhas de código escritas hoje (estimativa):**
- Aproximadamente 90 linhas escritas.

