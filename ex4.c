#include <stdio.h>
#include <stdlib.h>
 
#define MAX 10
 
void quick_sort(int *Vetor, int numEsquerda, int numDireita) {
	
    int i, j, x, y;
	 
    i = numEsquerda;
    j = numDireita;
    x = Vetor[(numEsquerda + numDireita) / 2];
     
    while(i <= j) {
        while(Vetor[i] < x && i < numDireita) {
            i++;
        }
        while(Vetor[j] > x && j > numEsquerda) {
            j--;
        }
        if(i <= j) {
            y = Vetor[i];
            Vetor[i] = Vetor[j];
            Vetor[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > numEsquerda) {
        quick_sort(Vetor, numEsquerda, j);
    }
    if(i < numDireita) {
        quick_sort(Vetor, i, numDireita);
    }
}
 
int main(){
	
 int i, vet[MAX];
 
 for(i = 0; i < MAX; i++)
 {
  printf("Digite um valor: ");
  scanf("%d", &vet[i]);
 }
 
 quick_sort(vet, 0, MAX - 1);
 
 printf("\n\n\t\tElementos ordenados:\n");
 for(i = 0; i < MAX; i++)
 {
  printf("%d\n", vet[i]);
 }
 
 return;
}
 
