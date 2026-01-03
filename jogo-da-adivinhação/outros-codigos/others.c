#include <stdio.h>

int main (){
  
  double pi = 3.1415;
  int raio = 3;
  
  double areadocirculo = pi * raio * raio;
  printf("A area do circulo é %d", areadocirculo);

}

------------------------------------------------------------------------------

#include <stdio.h>

int main (){
  
  int a = 3;
  int b = 2;
  
  //casting nesse exemplo converte a variavel para um tipo double
  
  double resultado = (double)a / (double)b;
  printf("%.2f", resultado);
  
}

------------------------------------------------------------------------------
#include <stdio.h>

int main(){

  double pi = 3.1415;
  
  // agora o casting forçado, de um tipo
  // que aguenta mais dados para um que aguenta
  // menos dados, perde informação
  
  int coitadodopi = (int)pi;
  printf("%d", coitadodopi);

}

------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main(){

  //função abs() recebe um inteiro como parametro e retorna positivo
  
  int x = -10;
  int y = abs(x);
  
  printf("%d", y);

}

------------------------------------------------------------------------------

#include <stdio.h>
#include <stidlib.h>

int main(){

  //rand(); gera um numero randomico ou seja aleatorio
  
  int n1 = rand();
  printf("%d", n1);
  
  int n2 = rand();
  printf("%d\n", n2);

}
