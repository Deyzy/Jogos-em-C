#include <stdio.h>

#define NUMEROS_DE_TENTATIVAS 3

int main() {

  printf ("*************************************\n");
  printf ("* Bem vindo ao jogo da adivinhação! *\n");
  printf ("*    Adivinhe o número secreto      *\n");
  printf ("*************************************\n");

  int numerosecreto;
  numerosecreto = 42;

  int chute;

  for(int i=1; i<=NUMEROS_DE_TENTATIVAS; i++){
    printf("Qual é o seu chute? \n");
    scanf("%d", &chute);

  if(chute < 0){
    printf("Você não pode chutar um número negativo\n");
    i--;
    continue;
  }else {
    printf("Seu %d°. chute foi %d\n", i, chute);

    int acertou = chute == numerosecreto;
    int maior = chute > numerosecreto;

    if(acertou){
      printf("Parabens! Você acertou\n");
      break;
    }else if (maior){
      printf("Seu chute foi maior que o número secreto\n");
    }else{
      printf("Seu chute foi menor que o número secreto\n");
    }
  }
}
  printf("Obrigado por jogar ;) \n");
}
