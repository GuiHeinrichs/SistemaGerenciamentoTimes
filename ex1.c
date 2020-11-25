#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa em C com uma fun��o que encontre o maior elemento de um array 
criado usando a Aloca��o de Mem�ria Din�mica (ou seja, tem de passar o ponteiro do vetor para a fun��o).

Dados de teste :

Insira o n�mero total de elementos (1 a 100): 5
N�mero 1: 5

N�mero 2: 7

N�mero 3: 2

N�mero 4: 9

N�mero 5: 8

Resultado esperado:
O maior elemento �: 9

*/

int maiorElemento (int *Vetor, int VetorLength){
	
	int maiorNumero = Vetor[0];
	int cont;
	
	for(cont = 0; cont < VetorLength; cont++){
		
		if(maiorNumero < Vetor[cont]){
			maiorNumero = Vetor[cont];
		}
	}
	
	return maiorNumero;
}

int main(){
	
	int tamanhoVetor, i;
	
	printf("Insira o n�mero total de elementos (1 a 100):\n");
	scanf("%d", &tamanhoVetor);
	
	int vetorNumerico[tamanhoVetor];
	
	vetorNumerico[tamanhoVetor] = (int *) malloc(tamanhoVetor*sizeof(int));
	
	if(vetorNumerico[tamanhoVetor] == NULL){
		printf("Erro ao alocar memoria.");
	}
	
	for(i = 0; i < tamanhoVetor; i++){
		
		printf("Numero [%d]: \n", i+1);
		scanf("%d", &vetorNumerico[i]);
		
	}
	
	int *p = vetorNumerico;
	int maiorNum = maiorElemento (p, tamanhoVetor);
	
	printf("Maior elemento: %d.", maiorNum);
	
	
}
	
	
	
