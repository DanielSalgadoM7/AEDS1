//Ler uma string de no máximo 50 caracteres e mostrar quantas letras possui e quantos caracteres são números e quantos não são nem números nem letras.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char texto[50];
  int contadorNum = 0;
  int contadorChar = 0;
  int contadorLetra = 0;
  
  printf("Digite um texto: ");
  scanf("%[^\n]", texto);

  int tamanho = strlen(texto);

  for(int i=0;i<tamanho;i++){
    if(isdigit(texto[i])){
      contadorNum++;
    }else if(isalpha(texto[i])){
      contadorLetra++;
    }else if(!(isalnum(texto[i]))) {
      contadorChar++;
    }
  }

  printf("O texto %s tem %d letras. Sendo %d números e %d caracteres diferentes de números e letras!", texto, contadorLetra, contadorNum, contadorChar - 1);
  return 0;
}
