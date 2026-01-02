#include <stdio.h>

int main() {

  printf ("*************************************\n");
  printf ("* Bem vindo ao jogo da adivinhação! *\n");
  printf ("*    Adivinhe o número secreto      *\n");
  printf ("*************************************\n");

  int numerosecreto = 42;
  
  int chute;
  int tentativas = 1;
  
  while(1){
    printf("Tentativa %d\n", tentativas);
    printf("Qual o seu chute? ");
    
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);
    
    if(chute < 0){
        printf("VocÊ não pode chutar numeros negativos\n");
        continue;
    }
    
    printf("Seu %dº chute foi %d\n", tentativas, chute);

    int acertou = chute == numerosecreto;
    int maior = chute > numerosecreto;
    
    if(acertou){
        printf("Parabens! Você acertou!\n");
        printf("Jogue de novo, você é um bom jogador");
        
        break;
        
    }else if (maior){
        printf("Seu chute foi maior do que o numero secreto!\n");
    }else {
        printf("Seu chte foi menor que o numero secreto");
    }
    
    tentativas++;
  }

  printf("Fim de jogo!\n");
  printf("Você acertou em %d tentativas!\n", tentativas);

}
