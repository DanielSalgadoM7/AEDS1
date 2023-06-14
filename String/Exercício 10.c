//Leia um conjunto indeterminado de palavras e ao final (estipule você um flag) informe qual foi a maior palavra e a menor palavra digitada, em tamanho e lexicograficamente.

#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main(void) {
  char texto[50],texto2[50], maiorTexto[50];
  
    printf("Digite uma palavra: ");
    fgets(texto, 50, stdin);
    printf("Digite uma palavra: ");
    fgets(texto2, 50, stdin);

    int resultado = strcmp(texto, texto2);
    printf("\nResultado ---> %d\n", resultado);

    if (resultado == 0) {
    printf("\nAs duas palavras tem a mesma quantidade de letras\n");
    }  

    else if (resultado < 0) {
    printf("\nA segunda palavra tem mais letras\n");
    }  

    else {
    printf("\nA primeira palavra tem mais letras\n");
    }

  return 0;
}
