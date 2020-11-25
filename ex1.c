#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa em C com uma função que encontre o maior elemento de um array 
criado usando a Alocação de Memória Dinâmica (ou seja, tem de passar o ponteiro do vetor para a função).

Dados de teste :

Insira o número total de elementos (1 a 100): 5
Número 1: 5

Número 2: 7

Número 3: 2

Número 4: 9

Número 5: 8

Resultado esperado:
O maior elemento é: 9

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
	
	printf("Insira o número total de elementos (1 a 100):\n");
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
	
	
	
