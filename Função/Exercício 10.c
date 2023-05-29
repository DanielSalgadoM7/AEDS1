/*Faça uma função que lê recebe um conjunto de notas de alunos, calcula e retorna a média das notas dos alunos aprovados (nota maior ou igual a 6). Faça um programa que lê o número
de alunos, as notas de cada aluno e imprime a média dos aprovados retornada pela função*/

#include <stdio.h>

float notasAlunos(int qntAlunos, int qntNotas){
  float media, nota[qntAlunos];

  for(int i=0;i<qntAlunos;i++){
    for(int j=0;j<qntNotas;j++){
      printf("Digite a nota do aluno: ");
      scanf("%f", &nota[j]);
      media += nota[j];
    }
  }
  
  media = media/qntAlunos;

  if(media>=6){
    return printf("A média do aluno foi: %.f e ele foi aprovado", media);
  }else{
  return printf("A média do aluno foi: %.f e ele foi reprovado", media);
  }
}

int main(void) {
  int qntNotas, qntAlunos;
  float media;

  printf("Digite a quantidade de alunos e quantidade de notas que deseja colocar de cada aluno: ");
  scanf("%d %d", &qntAlunos, &qntNotas);

  notasAlunos(qntAlunos, qntNotas);

  return 0;
}
