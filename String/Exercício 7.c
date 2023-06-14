//Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco. Utilize uma string auxiliar

#include <stdio.h>
#include <ctype.h>
#include <string.h>


void retiraEspaco(char texto1[], char texto2[], int tamanho){
  int j=0;
  int i=0;
  for(i=0;i<tamanho;i++){
    if(!(isspace(texto1[i]))){
      texto2[j] = texto1[i];
      j++;
    }
  }
  texto2[j]='\0';
}


int main(void) {
  int i=0, j=0;
  char texto1[50], texto2[50];
  printf("Digite um texto: ");
  scanf("%[^\n]", texto1);

  int tamanho = strlen(texto1);

  retiraEspaco(texto1, texto2, tamanho);
  
  printf("%s", texto2);

  
  return 0;
}
