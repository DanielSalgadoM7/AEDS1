/*Cria uma biblioteca chamada “arrays” que contenha funções úteis em arrays. Sua biblioteca deve ter os seguintes métodos:
void printArray(int n, int v[]); 
Recebe o array e seu tamanho. Imprime os elementos do array.
float mediaArray(int n, int v[]);
Recebe o array e seu tamanho. Retorna a média aritmética dos elementos do array.
float maxArray(int n, int v[]);
Recebe o array e seu tamanho. Retorna o maior elemento do array.
float minArray(int n, int v[]);
Recebe o array e seu tamanho. Retorna o menor elemento do array.
Crie um programa para testar cada um dos métodos da biblioteca*/


#include "arrays.h"
#include <stdio.h>

int main(void) {
  int n, vet[n];

  printf("Digite a quantidade de elementos do vetor: ");
  scanf("%d", &n);

  printf("Digite os elementos do vetor: ");
  for(int i=0;i<n;i++){
    scanf("\n%d",&vet[i]);
  }
  return 0;
}
