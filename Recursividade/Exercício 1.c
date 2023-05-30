//Escreva uma função recursiva que dado dois números 𝑥 e 𝑛, calcula o valor 𝑥 ∗ 𝑛 (𝑥 multiplicado por 𝑛). Não use o operador de multiplicação.

#include <stdio.h>

int multiplicaNumero(x, n){
  if(n==1){
    return x;
  }else{
    return x + multiplicaNumero(x, n-1);
  }
}

int main(void) {
  int x, n, resultado;

  printf("Digite o valor de X e de N: ");
  scanf("%d %d", &x, &n);

  resultado = multiplicaNumero(x, n);
  printf("O valor de %d * %d é: %d", x, n, resultado);
  return 0;
}
