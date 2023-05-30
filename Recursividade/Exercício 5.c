// Escreva uma função recursiva que determina quantas vezes um número inteiro x presente em vetor de números inteiros

#include <stdio.h>

int contador(int tamanho, int v[tamanho], int numero) {
  if (tamanho == 0) {
    return 0;
  }

  //o contador acontece no +1 quando o número repete
  else if (v[tamanho] == numero) {
    return 1 + contador(tamanho - 1, v, numero);
  }

  //o contador fica normal
  else {
    return contador(tamanho - 1, v, numero);
  }
}

int main(void) {
  int vetor[10] = {2, 2, 2, 5, 6, 7, 8, 9, 2, 1};
  //declaro o contador já dizendo que o tamanho é 10 e que quero o 2 como número repetido
  int cont = contador(10, vetor, 2);

  printf("\nO numero 2 aparece %d vezes no vetor\n", cont + 1);
  return 0;
}
