//Ler uma string de no máximo 50 caracteres e em seguida um caractere, mostrar quais as posições esse caractere aparece na string lida e quantas vezes ele apareceu.

#include <stdio.h>

int main(void) {
  char texto[49], letra;
  int contador = 0;
  printf("Digite um texto: ");
  scanf("%[^\n]", texto);

  printf("Digite um caractere: ");
  scanf(" %c", &letra);

  for(int i=0;i<50;i++){
    if(texto[i] == letra){
      printf("%d\t", i);
      contador++;
    }
  }
  printf("\nO caracter %c apareceu %d vezes no texto %s !", letra, contador, texto);
  return 0;
}
