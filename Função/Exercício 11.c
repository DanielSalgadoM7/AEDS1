/*Faça uma função que recebe a idade de um nadador por parâmetro e retorna a categoria desse nadador de acordo com a tabela abaixo.
Idade (anos) Categoria
5 a 7 F
8 a 10 E
11 a 13 D
14 a 15 C
16 a 17 B
Acima de 18 A Faça um programa que lê a idade de um nadador e imprime a categoria retornada pela função*/

#include <stdio.h>

char idadeNadador(int idade){
  char resposta;

  if(idade<=7){
    resposta = 'F';
  }else if(idade<=10){
    resposta = 'E';
  }else if(idade<=13){
    resposta = 'D';
  }else if(idade<=15){
    resposta = 'C';
  }else if(idade<=17){
    resposta = 'B';
  }else if(idade>=18){
    resposta = 'A';
  }
  return resposta;
}

int main(void) {
  int idade;

  printf("Digite a idade do nadador: ");
  scanf("%d", &idade);

  printf("A categoria do nadador é %c!", idadeNadador(idade));
  return 0;
}
