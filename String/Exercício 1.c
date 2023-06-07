//Ler uma string de no máximo 50 caracteres e contar quantas letras A essa palavra possui.

#include <stdio.h>

int main(void) {
  int contador = 0;
  char texto[50];
  scanf(" %[^\n]", texto);

  for(int i=0;i<50;i++){
    if(texto[i]=='a'){
      contador++;
    }
  }
  printf("%d letras A", contador);
  return 0;
}
