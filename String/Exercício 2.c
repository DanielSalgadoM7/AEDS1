//Ler uma string de no máximo 50 caracteres e indicar quais as posições da letra A nessa palavra.

#include <stdio.h>

int main(void) {
  char texto[49];
  printf("Digite um texto: ");
  scanf("%[^\n]", texto);

  printf("A letra A aparece nas posições: ");
  for(int i=0;i<50;i++){
    if(texto[i]=='A'){
      printf("%d \t", i);
    }
  }
  return 0;
}
