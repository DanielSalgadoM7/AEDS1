/*Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero). 
Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).

Entrada
O arquivo de entrada contém um número não determinado de valores M e N. A última linha de entrada vai conter um número nulo ou negativo.

Saída
Para cada dupla de valores, imprima a sequência do menor até o maior e a soma deles, conforme exemplo abaixo.*/

#include <stdio.h>

int main() {
  int valorM = 0, valorN = 0, menor = 0, maior = 0, soma = 0;
  scanf("%d %d", &valorM, &valorN);

  while (valorM != 0 && valorN != 0) {
    if (valorM > valorN) {
      menor = valorN;
      maior = valorM;
    } else {
      menor = valorM;
      maior = valorN;
    }

    for (int i = menor; i <= maior; i++) {
      soma += i;
    }

    for (int i = menor; i <= maior; i++) {
      printf("%d ", i);
    }
    printf("Sum=%d\n", soma);
    
    soma = 0;
    scanf("%d %d", &valorM, &valorN);
    
  }
  return 0;
}
