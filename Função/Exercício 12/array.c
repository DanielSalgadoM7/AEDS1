#include "arrays.h"

//Recebe o array e seu tamanho. Imprime os elementos do array.
void printArray(int n, int v[]){
  printf("\nOs elementos do vetor são: ");
  for(int i=0;i<n;i++){
    printf("\n%d\t", v[i]);
  }  
}

//Recebe o array e seu tamanho. Retorna a média aritmética dos elementos do array.
float mediaArray(int n, int v[]){
  float media;
  for(int i=0;i<n;i++){
    media += v[i];
  }
  media = media/n;
}

//Recebe o array e seu tamanho. Retorna o maior elemento do array.
float maxArray(int n, int v[]){
  int maior;
  maior = v[0];
  for(int i=0;i<n;i++){
    if(v[i]>maior){
      maior = v[i];
    }
  }
  printf("O maior número é: %d", maior);
}


//Recebe o array e seu tamanho. Retorna o menor elemento do array.
float minArray(int n, int v[]){
  int menor;
  menor = v[0];
  for(int i=0;i<n;i++){
    if(v[i]>menor){
      menor = v[i];
    }
  }
  printf("O maior número é: %d", menor);
}

