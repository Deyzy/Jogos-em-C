#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS 3

int main() {

  printf ("*************************************\n");
  printf ("* Bem vindo ao jogo da adivinhação! *\n");
  printf ("*    Adivinhe o número secreto      *\n");
  printf ("*************************************\n");
  
  int chute;
  int acertou = 0;
  int tentativas = 1;
  double pontos = 1000;
  
  srand(time(0));
  int numerosecreto = rand() % 100;
  
  while(!acertou){
  
    printf("qual é o seu %dº chute\n", tentativas);
    scanf("%d", &chute);
    
    if(chute < 0){
        printf("VocÊ não pode chutar numeros negativos\n");
        continue;
    }
    
    printf("Seu %dº chute foi %d\n", tentativas, chute);

    acertou = chute == numerosecreto;
    int maior = chute > numerosecreto;
    
    if(acertou){
        printf("Parabens! Você acertou!\n");
    }else if (maior){
        printf("Seu chute foi maior do que o numero secreto!\n");
    }else {
        printf("Seu chute foi menor que o numero secreto\n");
    }
    
    tentativas++;
    
    double pontosperdidos = abs(chute - numerosecreto) / 2.0;
    pontos = pontos - pontosperdidos;
    
  }

  printf("Você fez %.2f pontos\n", pontos);
  printf("Obrigado por jogar\n");

}
