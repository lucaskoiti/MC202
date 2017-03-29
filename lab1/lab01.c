#include "func_lab1.h"

/*0 - estoque | 1- descarte | 2 - jogo | 3 - saida*/
carta *cria_lista(int tipo, indice *ind){
  carta *kbca = malloc(sizeof(carta));

  if(tipo == 0){
      ind->estoque = kbca;
      kbca->prox = NULL;
      return kbca;
  }
  else if(tipo == 1){
      ind->descarte = kbca;
      kbca->prox = NULL;
      return kbca;
  }
  else if(tipo == 2){
      i++;
      ind->J[i] = kbca;
      kbca->prox = NULL;
      return kbca;
  }
  else if(tipo == 3){
      j++;
      ind->S[j] = kbca;
      kbca->prox = NULL;
      return kbca;
  }
  return NULL;
}

void insere_carta(carta *kbc, int num, char naipe, int face){
  carta *deck = malloc(sizeof(carta));

  deck->num = num;
  deck->naipe = naipe;
  deck->face = face;

  deck->prox = kbc->prox;
  kbc->prox = deck;
}

void move_carta(carta *kbc1, carta *kbc2){// de uma pilha para outra
      //estoque para descarte
    carta *aux;

    aux = kbc1->prox->prox;//salva o prox do elemento
    kbc1->prox->prox = kbc2->prox;//o elemento passa a apontar para o prox da kbc2
    kbc2->prox = kbc1->prox;//a kbc2 passa a apontar para o elemento
    kbc1->prox = aux;//a kbc1 passa a apontar para o qual o elemento apontava

}

/*void realiza_jogada(indice *p){//procura jogada e atraves de um ponteiro aux a realiza

}*/

void libera_jogo(indice *p){

}
