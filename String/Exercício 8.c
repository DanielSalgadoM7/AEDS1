//Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco. Sem utilize string auxiliar.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
  char texto1[50];
  printf("Digite um texto: ");
  scanf("%[^\n]", texto1);

  int tamanho = strlen(texto1);

  int j=0;
  int i=0;
  for(i=0;i<tamanho;i++){
    if(!(isspace(texto1[i]))){
      texto1[j] = texto1[i];
      j++;
    }
  }
  texto1[j] = '\0';

  printf("%s", texto1);
  return 0;
}
