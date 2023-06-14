//Ler uma string de no máximo 50 caracteres. Em seguida, leia outra string de no máximo 3 caracteres. Informe quantas vezes a segunda string aparece na primeira string, e diga as posições iniciais em que ela aparece

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
  char texto[50], texto2[3];
  int contador = 0;
  printf("Digite um texto: ");
  fgets(texto, 50, stdin);

  printf("\nDigite um outro texto de 3 palavras: ");
  fgets(texto2, 3, stdin);

  int tamanho = strlen(texto);
  int j=0;
  printf("\nO número das posições que a letra aparece é: ");
  for(int i=0;i<tamanho;i++){
    if(texto[i]==texto2[j]){
      printf("%d\t", i);
      contador++;
      j++;
    }
  }
  texto[j]='\0';
  printf("\n\nO contador de letras é: %d", contador);
  return 0;
}
