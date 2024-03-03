/*Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a média semestral. 
Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.

Entrada
A entrada contém vários valores reais, positivos ou negativos. O programa deve ser encerrado quando forem lidas duas notas válidas.

Saída
Se uma nota inválida  for lida, deve ser impressa a mensagem "nota invalida".
Quando duas notas válidas forem lidas, deve ser impressa a mensagem "media = " seguido do valor do cálculo. O valor deve ser apresentado com duas casas após o ponto decimal.*/

#include <stdio.h>

int main() {
    double nota = 0.0, soma[2];
    int j = 0;

    while(1){
        scanf("%lf", &nota);
        if(nota >= 0 && nota <= 10){
            soma[j] = nota;
            j++;
        }else{
          printf("nota invalida\n");
        }
        if(j>1){
            break;
        }
    }

    double media = (soma[0] + soma[1])/2.0;
    printf("media = %.2lf\n", media);

    return 0;
}
