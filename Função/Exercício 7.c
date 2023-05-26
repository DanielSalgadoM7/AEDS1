/*Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S, calculado segundo a fórmula abaixo.
S = 1 + 1/1! + 1/2! + 1/3! + ...+1 /N!
Faça um programa que leia N e imprima o valor retornado pela função.*/

#include <stdio.h>

float calculaSomatorio(float somatorio, int num, int fatorial){
  for(int i=1;i<=num;i++){
    fatorial *= i;
  }
   somatorio = somatorio + 1/fatorial; 
  
   return somatorio;
}

int main(void) {
  int num, somatorio = 1, fatorial = 1;
  float resultado = 0;

  printf("Digite o número desejado: ");
  scanf("%d", &num);

  resultado = calculaSomatorio(somatorio, num, fatorial);
  printf("O somatório é: %f", resultado);
  return 0;
}
