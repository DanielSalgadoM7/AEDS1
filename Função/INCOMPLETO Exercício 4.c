/*Escreva um procedimento que recebe 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual é o tipo de triângulo formado. 
Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor
do que a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:
- Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
- Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais.
- Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
Faça um programa que leia um número indeterminado de triângulos (valores dos 3 lados) e para cada triângulo, acione o procedimento*/

#include <stdio.h>

void calculaTriangulo(int n1, int n2, int n3){

  printf("\nDigite o lado de cada triângulo: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  
  if(n1 == n2 && n1 == n3){
    printf("\nO triângulo é equilátero!\n");
  }else if(n1 != n2 && n2 == n3 || n1 == n2 && n1 != n3){
    printf("\nO triângulo é isósceles!\n");
  }else{
    printf("\nO triângulo é escaleno!\n");
  }
}

int main(){
  int n1, n2, n3, qnt;

  printf("Quantos triângulos deseja ler? ");
  scanf("%d", &qnt);

  for(int i=0;i<qnt;i++){
    calculaTriangulo(n1, n2, n3);
  }
}
