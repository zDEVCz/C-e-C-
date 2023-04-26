#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){
    //Imprime na tela
    printf("\nHello, World!\n");
    
    // Definindo variaveis
    int a = 10;

    //Conectivo Lógico E (and), se uma comparação for falsa não entra no bloco
    if(a>5 && a<15){
        printf("\nA variavel 'a' esta entre 5 e 15");
    }

    //Conectivo Lógico ou (or), se uma comparação for falsa já entra no bloco
    if(a>5 || a>15){
        printf("\nA variavel 'a' eh maior 5 ou 15");
    }

    //Misturando Conectivos
    if( (a>5 && a<15) || a<15){
        printf("\nA variavel 'a' esta entre 5 e 15 ou eh menor 15");
    }

}