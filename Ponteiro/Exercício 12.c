//A alocação dinâmica de memória permite trabalhar com matrizes de formas diferentes, a saber:
//• Utilizando um ponteiro simples.
//• Utilizando um arranjo de ponteiro.
//• Utilizando um ponteiro para ponteiro

#include <stdio.h>
#include <stdlib.h>

int main(){
  
//Ponteiro simples
int NLIN, NCOL, *p;
printf("Digite o numero de linhas e colunas: ");
scanf("%d %d", &NLIN, &NCOL);
p = (int*) malloc(NLIN * NCOL * sizeof(int));
for(int i = 0; i < NLIN * NCOL; i++) {
printf("Digite um numero: ");
scanf("%d", p+i); //scanf("%d", &p[i]);
}
for(int i = 0; i < NLIN; i++) {
for(int j = 0; j < NCOL; j++) {
printf("%5d", *(p + i*NCOL + j)); //printf("%5d", p[i*M + j]);
}
printf("\n");
}
free(p);
return 0;
}

//Arranjo de ponteiro
int NLIN, NCOL;
printf("Digite o numero de linhas e colunas: ");
scanf("%d %d", &NLIN, &NCOL);
int *p[NLIN];
for(int i = 0; i < NLIN; i++) {
p[i] = (int*) malloc(NCOL * sizeof(int));
}
for(int i = 0; i < NLIN; i++) {
for(int j = 0; j < NCOL; j++) {
printf("Digite um numero: ");
scanf("%d", &p[i][j]); //scanf("%d", p[i] + j);
}
}
for(int i = 0; i < NLIN; i++) {
for(int j = 0; j < NCOL; j++) {
printf("%5d", p[i][j]); //printf("%5d", *(p[i] + j));
}
printf("\n");
}
for(int i = 0; i < NLIN; i++) {
free(p[i]);
}

//Ponteiro para ponteiro
#include <stdio.h>
#include <stdlib.h>
int main()
{
int NLIN, NCOL;
printf("Digite o numero de linhas e colunas: ");
scanf("%d %d", &NLIN, &NCOL);
int **p = (int**) malloc(NLIN * sizeof(int*));
for(int i = 0; i < NLIN; i++) {
p[i] = (int*) malloc(NCOL * sizeof(int));
}
for(int i = 0; i < NLIN; i++) {
for(int j = 0; j < NCOL; j++) {
printf("Digite um numero: ");
scanf("%d", &p[i][j]); //scanf("%d", *(p+i) + j);
}
}
for(int i = 0; i < NLIN; i++) {
for(int j = 0; j < NCOL; j++) {
printf("%5d", p[i][j]); //printf("%5d", *(*(p+i) + j));
}
printf("\n");
}
for(int i = 0; i < NLIN; i++) {
free(p[i]);
}
free(p);
return 0;
}

