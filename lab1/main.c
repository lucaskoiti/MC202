#include "func_lab1.h"

int main(int argc, char const *argv[]) {
  int i,j, num;
  char naipe;
  carta *baralho, *jogo;
  indice *ind = malloc(sizeof(indice));

  baralho = cria_lista(0, ind);

  for (i = 0; i < 3; i++) {//52
    scanf("%d%c ", &num, &naipe);
    insere_carta(baralho, num, naipe, 0);
  }

  jogo = cria_lista(2, ind);
  printf(">>>>>>%d %c\n", baralho->prox->prox->num, baralho->prox->prox->naipe);
  /*
  for (j = 0; j < 28; j++) {
    move_carta(baralho, jogo);
  }*/



  return 0;
}
