/*Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S, calculado segundo a fórmula abaixo.
S = 1 + 1/1! + 1/2! + 1/3! + ...+1 /N!
Faça um programa que leia N e imprima o valor retornado pela função.*/

#include <stdio.h>

float calculaSomatorio(float somatorio, int num, int fatorial){
  for(int i=1;i<=num;i++){
    fatorial *= i;
  }
  for(int i=1;i<=num;i++){
   somatorio = 1 + 1/fatorial; 
  }
}

int main(void) {
  int num = 0, somatorio = 0, fatorial = 1;

  printf("Digite o número desejado: ");
  scanf("%d", &num);

  calculaSomatorio(somatorio, num, fatorial);
  return 0;
}
