


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
