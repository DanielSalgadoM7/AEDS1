//Um problema típico em ciência da computação consiste em converter um número inteiro da sua forma decimal para a forma binária. Escreva uma função recursiva que recebe um número inteiro e imprime a sua representação binária

#include <stdio.h>

int decimalBinario(num){
  if(num==0){
    printf("%d", num);
  }else{
    decimalBinario(num / 2);
    printf("%d", num % 2);
  }
}

int main(void) {
  int num, binario;
  printf("Digite um número inteiro decimal: ");
  scanf("%d", &num);

  binario = decimalBinario(num);
  return 0;
}
