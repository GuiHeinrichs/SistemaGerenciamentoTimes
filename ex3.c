#include <stdio.h>

/*
Escreva uma função chamada AdicionaDois(). Ela receberá três ponteiros para floats. Ela adicionará os números apontados pelos dois primeiros e 
armazenará sua soma no local apontado pelo terceiro ponteiro. Em main(), defina três variáveis float j, k e m. Informe j e k,
envie seus endereços para AdicionaDois() e faça com que main() imprima o endereço de m e seu valor que veio dele de AdicionaDois().
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
