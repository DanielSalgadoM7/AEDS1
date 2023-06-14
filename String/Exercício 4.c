//Ler uma string de no máximo 50 caracteres e em seguida um caractere (entre A e z - consista se o caracter esta nesse intervalo), mostrar quais as posições esse caractere (maiúscula ou minúscula) na string lida e quantas vezes ele apareceu

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char texto[50];
  char letra;
  int i = 0;
  int tamanho = 0;
  int contador = 0;

  printf("\nDigite um texto: ");
  scanf("%[^\n]", texto);

  printf("\nDigite uma letra: ");
  scanf(" %c", &letra);

  if (isalpha(letra)) {
    tamanho = strlen(texto);

    printf("\nO caractere %c aparace nas posições: ", letra);
    for (i = 0; i < tamanho; i++) {
      if (texto[i] == letra) {
        printf("%d \t", i);
        contador++;
      }
    }
  }

  else {
    printf("\nNão está entre A e z!\n");
  }

  printf("\n\nA quantidade de caractere \"%c\" na string %s é: %d\n", letra, texto, contador);
  return 0;
}
