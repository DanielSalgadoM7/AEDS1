/*Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.

Entrada
A entrada contém vários casos de teste. Cada caso contém dois valores inteiros X e Y. A leitura deve ser encerrada ao ser fornecido valores iguais para X e Y.

Saída
Para cada caso de teste imprima “Crescente”, caso os valores tenham sido digitados na ordem crescente, caso contrário imprima a mensagem “Decrescente”.*/

#include <stdio.h>

int main() {
  int valorX = 0, valorY = 0;
  scanf("%d %d", &valorX, &valorY);

  while (valorX != valorY) {
    if (valorX > valorY) {
      printf("Decrescente\n");
    } else {
      printf("Crescente\n");
    }
    scanf("%d %d", &valorX, &valorY);
  }
  return 0;
}