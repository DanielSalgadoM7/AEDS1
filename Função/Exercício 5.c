/*Faça um procedimento que recebe a média final de um aluno, identifica e exibe o seu conceito, conforme a tabela abaixo. 
Faça um programa que leia a média de N alunos, acionando o procedimento para cada um deles. (N deve ser lido do teclado)
Nota Conceito
Até 39 F
40 a 59 E
60 a 69 D
70 a 79 C
80 a 89 B
A partir de 90 A
*/

#include <stdio.h>

void media(float media){
  printf("Digite a média do aluno: ");
  scanf("%f", media);

  if(media <= 39){
    printf("A nota conceito do aluno é F");
  }else if(media <=59){
    printf("A nota conceito do aluno é E");
  }else if(media <=69){
    printf("A nota conceito do aluno é D");
  }else if(media <=79){
    printf("A nota conceito do aluno é C");
  }else if(media <=89){
    printf("A nota conceito do aluno é B");
  }else if(media >-90){
    printf("A nota conceito do aluno é A");
  }
}

int main(void) {
  
  return 0;
}
