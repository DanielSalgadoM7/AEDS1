//Escreva uma função que receba um número inteiro e retorne o fatorial deste número usando a abordagem recursiva

#include <stdio.h>

int calculaFatorial(n){
  if(n==1 || n==0){
    return 1;
  }else{
    return n * calculaFatorial(n-1);
  }
}

int main(void) {
  int n, fatorial = 1;

  printf("Digite um número inteiro: ");
  scanf("%d", &n);

  fatorial = calculaFatorial(n);

  printf("O fatorial de %d é: %d", n, fatorial);
  return 0;
}
