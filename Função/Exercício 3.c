//Faça um procedimento que recebe 3 valores inteiros por parâmetro e os exiba em ordem crescente. 
//Faça um programa que leia N conjuntos de 3 valores e acione o procedimento para cada conjunto. (N deve ser lido do teclado)

#include <stdio.h>

void valores(int n1, int n2, int n3, int aux){

  printf("\nDigite os 3 números: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  if (n1 > n2) {
    aux = n1;
    n1 = n2;
    n2 = aux;
  }

  if (n1 > n3) {
    aux = n1;
    n1 = n3;
    n3 = aux;
  }

  if (n2 > n3) {
    aux = n2;
    n2 = n3;
    n3 = aux;
  }
  printf("\nOs numeros em ordem crescente são: %d %d %d\n", n1, n2, n3);
}


int main(){
  int n1, n2, n3, qnt, aux;

  printf("Quantos conjuntos de 3 números você deseja digitar? ");
  scanf("%d", &qnt);

  for(int i=0;i<qnt;i++){
    valores(n1, n2, n3, aux);
  }
}
