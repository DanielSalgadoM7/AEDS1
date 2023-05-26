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

void mediaAluno(float media){
  printf("\nDigite a média do aluno: ");
  scanf("%f", &media);

  if(media <= 39){
    printf("\nA nota conceito do aluno é F\n");
  }else if(media <=59){
    printf("\nA nota conceito do aluno é E\n");
  }else if(media <=69){
    printf("\nA nota conceito do aluno é D\n");
  }else if(media <=79){
    printf("\nA nota conceito do aluno é C\n");
  }else if(media <=89){
    printf("\nA nota conceito do aluno é B\n");
  }else if(media >-90){
    printf("\nA nota conceito do aluno é A\n");
  }
}

int main(void) {
  float media;
  int qnt;

  printf("Digite a quantidade de alunos que deseja colocar a média: ");
  scanf("%d", &qnt);

  for(int i=0;i<qnt;i++){
    mediaAluno(media);
  }
  return 0;
}

