#include <stdio.h>

/*
Escreva uma fun��o chamada AdicionaDois(). Ela receber� tr�s ponteiros para floats. Ela adicionar� os n�meros apontados pelos dois primeiros e 
armazenar� sua soma no local apontado pelo terceiro ponteiro. Em main(), defina tr�s vari�veis float j, k e m. Informe j e k,
envie seus endere�os para AdicionaDois() e fa�a com que main() imprima o endere�o de m e seu valor que veio dele de AdicionaDois().
*/

float AdicionaDois(float *ponteiroJ, float *ponteiroK, float *ponteiroM){
	
	
	return *ponteiroM = *ponteiroJ + *ponteiroK;
}


int main(){
	
	float j, k, m;
	
	printf("Informe um valor para j: ");
	scanf("%f", &j);
	
	printf("Informe um valor para k: ");
	scanf("%f", &k);
	
	float r = AdicionaDois(&j, &k, &m);
	float *p = &m;
	
	printf("\nEndereco de m: %p.\n\nValor de m: %.2f.\n", p, r);
	
}
