#include <stdio.h>

#define NUMEROS_DE_TENTATIVAS 3

int main() {

  printf ("*************************************\n");
  printf ("* Bem vindo ao jogo da adivinhação! *\n");
  printf ("*************************************\n");

  int numerosecreto;
  numerosecreto = 42;

  int chute;

  for(int i=1; i <= NUMEROS_DE_TENTATIVAS; i++ ){
    printf("Qual é o seu chute? ", i);
    scanf("%d", &chute);
    printf("Seu %d°. chute foi %d\n", i, chute);

  int acertou = chute == numerosecreto;

  if(acertou){
    printf("Parabens vc acertou\n");
    break;
  }else{
    int maior = chute > numerosecreto;
    if(maior){
      printf("Seu chute foi maior que o número secreto\n");
    }else {
      printf("Seu chute foi menor que o numero secreto\n");
    }
  }
}

  printf("Obrigado por jogar ;) \n");
}
