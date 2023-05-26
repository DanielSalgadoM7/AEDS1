//Escreva uma função que receba um número inteiro e retorne o fatorial deste número.

#include <stdio.h>

int calculaFatorial(int num, int fatorial){
  for(int i=1;i<=num;i++){
    fatorial *= i;
  }
  return printf("O fatorial do número %d é %d", num, fatorial);
}

int main(void) {
  int num, fatorial = 1;

  printf("Digite o número que deseja saber o fatorial: ");
  scanf("%d", &num);

  calculaFatorial(num, fatorial);
  return 0;
}
