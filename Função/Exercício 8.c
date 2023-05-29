/*Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função deve retornar um valor lógico (true ou false). 
Faça um programa que lê N números e para cada um deles exibe uma mensagem informando se ele é positivo ou não, dependendo se foi retornado verdadeiro 
ou falso pela função*/


#include <stdio.h>

int isPositivo(int num){
  if(num>=0){
    return 1;
  }else{
    return 0;
  }
  }

int main(void) {
   int qnt, num;
  
  printf("Digite a quantidade de números que deseja informar: ");
  scanf("%d", &qnt);

  printf("\nO resultado será em valor lógico: 1 = Positivo e 0 = Negativo\n");
  for(int i=0;i<qnt;i++){
    printf("\nDigite o número: ");
    scanf("%d", &num);
    if(isPositivo(num)==1){
      printf("\n1\n");
    }else{
      printf("\n0\n");
    }
  }
  return 0;
}
