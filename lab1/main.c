#include "func_lab1.h"

int main(int argc, char const *argv[]) {
  int i,j, num;
  char naipe;
  carta *baralho, *p;
  indice *ind = malloc(sizeof(indice));

  baralho = cria_lista(0, ind);

  scanf("%d%c ", &num, &naipe);
  insere_carta(baralho, num, naipe, 0);

  for (i = 0; i < 51; i++) {//52
    scanf("%d%c ", &num, &naipe);
    insere_carta(baralho, num, naipe, 0);
  }
/*
  while(p != NULL){
    p = baralho->prox;
    printf("%d%c ", p->num, p->naipe);
    p = p->prox;
  }*/

  for (j = 0; j < 28; j++) {
    move_carta(baralho, ind->J[j%7]);
  }



  return 0;
}
