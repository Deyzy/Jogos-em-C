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
  double pontos = 1000;

  int nivel;
  int totaldetentativas;
   
  int acertou = 0;
 
  srand(time(0));
  int numerosecreto = rand() % 100;
 
 
 
  printf("Qual o nível de dificuldade?\n");
  printf("(1) Fácil (2) médio (3) Dificil\n\n");
  printf("Escolha: ");
  
  scanf("%d", &nivel);
  
  switch(nivel){
    case 1:
        totaldetentativas = 20;
        break;
    case 2:
        totaldetentativas = 15;
        break;
    default:
        totaldetentativas = 6;
        break;
  }
  
  for(int i = 1; i <= totaldetentativas; i++){
  
    printf("-> Tentativa %d de %d\n\n", i, totaldetentativas);
    
    printf("Chute um número: ");
    scanf("%d", &chute);
    
    if(chute < 0){
        printf("Você não pode chutar numeros negativos\n");
        continue;
    }
    
    //printf("Seu %dº chute foi %d\n", i, chute);

    int acertou = chute == numerosecreto;
    int maior = chute > numerosecreto;
    
    if(acertou){
        break;
    }else if (maior){
        printf("Seu chute foi maior do que o numero secreto!\n\n");
    }else {
        printf("Seu chute foi menor que o numero secreto\n\n");
    }
    
    double pontosperdidos = abs(chute - numerosecreto) / 2.0;
    pontos = pontos - pontosperdidos;
    
  }
     // imprimindo mensagem de vitoria ou derrota
    printf("\n");
    if(acertou) {
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\nParabéns! Você acertou!\n");
        printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
    } else {
 
        printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");
 
        printf("\nVocê perdeu! Tente novamente!\n\n");
    }

}
