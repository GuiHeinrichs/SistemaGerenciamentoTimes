#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void conta(char *str, int *vog, int *con){
    char *s = str;
    *vog = *con = 0;
    while(*s){
        char consoante = tolower(*s);        
        if(consoante >= 'a' && consoante <= 'z'){
            if(consoante == 'a' || consoante == 'e' ||
                consoante == 'i' || consoante == 'o' ||
                consoante == 'u'){
                *vog += 1;
            }else{
                *con += 1;
            }
        }
        *s++;
    }
}

int main(){
    char palavra[50];
    int vogal, consoante;
    
    printf("Insira uma string: ");
    gets(palavra);
    
    conta(palavra, &vogal, &consoante);
    printf("Vogais = %d\nConsoantes = %d\n", vogal, consoante);
    return 0;
}
