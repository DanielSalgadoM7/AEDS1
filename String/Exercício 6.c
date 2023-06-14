//Ler uma string de no máximo 50 caracteres e criar uma nova string com seu inverso, isso é a última letra da primeira string será a primeira na nova string e assim sucessivamente.

#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(void) {
  char texto[50];

  printf("Digite um texto: ");
  scanf("%[^\n]", texto);

  int tamanho = strlen(texto);

  printf("\nO texto original é: ");
  for(int i=0;i<tamanho;i++){
    printf("%c", texto[i]);
  }

  printf("\nO texto ao contrário é: ");
  for(int i=tamanho;i>=0;i--){
    printf("%c", texto[i]);
  }
  return 0;
}
