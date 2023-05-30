//Escreva uma função recursiva que dado dois números 𝑥 e 𝑛, calcula o valor 𝑥𝑛 (𝑥 elevo a 𝑛). Não use as funções de math.h.

#include <stdio.h>

int numeroElevado(x, n){
  if(n==0){
    return 1;
  }else if(n==1){
    return x;
  }else{
    return x
  }
}

int main(void) {
  int x, n, resposta;

  printf("Digite dois números inteiros: ");
  scanf("%d %d", &x, &n);

  resposta = numeroElevado(x, n);
  printf("O número %d elevado a %d é: %d", x, n, resposta);
  
  return 0;
}
