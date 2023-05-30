//Escreva uma função recursiva que calcula a soma de todos os elementos de um arranjo de números reais

#include <stdio.h>

int calculaSoma(int n, int vet[]){
  int soma;
  if(n==0){
    return 0;
  }else{
    return vet[n-1] + calculaSoma(n -1,vet);
  }
}

int main(void) {
  int n = 5, soma;
  int vet[] = {2,3,4,3,-2};
  
  soma = calculaSoma(n, vet);
  printf("A soma de todos os elementos do vetor é: %d", soma);
  return 0;
}
