/*Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S, calculado segundo a fórmula abaixo.
S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n^2+1)/(n+3). Faça um programa que leia N e imprima o valor retornado pela função.*/

#include <stdio.h>
#include <math.h>

float calculaSomatorio(int qnt, float S[]){
  for(int i=1;i<=qnt;i++){
  S[i] += (float)(pow(i,2) + 1)/(i+3);
  }
}


int main(void) {
  int qnt;
  float somatorio = 0;

  printf("Digite o número: ");
  scanf("%d", &qnt);

  calculaSomatorio(qnt, &somatorio);

  printf("O somatório é: %.2f", somatorio);
  return 0;
}
