/*Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S, calculado segundo a fórmula abaixo.
S = 1 + 1/1! + 1/2! + 1/3! + ...+1 /N!
Faça um programa que leia N e imprima o valor retornado pela função.*/

#include <stdio.h>

int calculaFatorial(int num, int fatorial){
  fatorial = 1;
  for(int i=1;i<=num;i++){
    fatorial *= i;
  }
  
  return fatorial;
}

float calculaSomatorio(float somatorio, int num, int fatorial){

   for (int i = 1; i <= num; i++) {
    somatorio = somatorio + 1.0 / calculaFatorial(i, fatorial);   //Quando chama o I na função de fatorial, mostra o resultado de cada iteração
  }

  return somatorio;
}

int main(void) {
  int num, fatorial = 1;
  float resultado = 0, somatorio = 1;

  printf("Digite o número desejado: ");
  scanf("%d", &num);

  printf("\nO fatorial do número %d é: %d\n", num, calculaFatorial(num, fatorial));

  printf("\nO somatório é: %f", calculaSomatorio(somatorio, num, fatorial));
  return 0;
}
