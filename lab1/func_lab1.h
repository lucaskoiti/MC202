#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct carta carta;
struct carta{
  int num;
  char naipe;
  int face;
  carta *prox;
};

/*indice que indica as outras listas para analise de jogada*/
/*obs: a primeira carta encontra-se no prox do prox (kbc-kbc-carta)*/
int i, j;
typedef struct _indice{
  carta *estoque;
  carta *descarte;
  carta *S[3];
  carta *J[6];
} indice;

carta *cria_lista(int tipo, indice *ind);
void insere_carta(carta *kbc, int num, char naipe, int face);
void move_carta(carta *kbc1, carta *kbc2);
//void realiza_jogada(indice *p);//procura jogada e atraves de um ponteiro aux a realiza
void libera_jogo(indice *p);
