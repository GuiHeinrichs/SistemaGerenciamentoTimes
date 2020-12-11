#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){
	
	FILE *arquivo = fopen ("binario.txt", "wb");
	
	if(arquivo == NULL){
		printf("Erro ao abrir o arquivo.\n");
	}
	
	int i, tamanhoStruct;
	
	printf("Digite o tamanho da Struct: \n");
	scanf("%d", &tamanhoStruct);
	
	 struct produto {

      int codigo;

      char nome[30];

      float preco;

    }p[tamanhoStruct];
    
    for(i = 0; i < tamanhoStruct; i++){
    	printf("Digite o codigo do produto %d: \n", i+1);
    	scanf("%d", &p[i].codigo);
    	fflush(stdin);
    	
    	printf("Digite o nome do produto %d: \n", i+1);
    	gets(p[i].nome);
    
    	
    	printf("Digite o preco do produto %d: \n", i+1);
    	scanf("%f", &p[i].preco);
    	
	}
	
	for(i = 0; i < tamanhoStruct; i++){
		
		fwrite(&p[i].codigo, sizeof(int), 1, arquivo);
		
		fwrite(p[i].nome, sizeof(char), 30, arquivo);
		
		fwrite(&p[i].preco, sizeof(float), 1, arquivo);	
	}
	
	//busca(tamanhoStruct);
	
	fclose(arquivo);
	
	return;
}

/*void busca(struct busca Busca[tamanhoStruct], int *tamanho){
	
	int i;
	char nome[30];
	
	printf("Nome que deseja buscar: ");
	gets(nome);
	
	for(i = 0; i < tamanho; i++){
		
		if(nome == Busca[i].nome){
			fread(str1, sizeof(char), 30, arquivo);
			str1[]
		}
		
	}
	*/
//}
