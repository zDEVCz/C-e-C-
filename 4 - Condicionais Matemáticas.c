#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){
    //Imprime na tela
    printf("\nHello, World!\n");

    // Definindo variaveis
    int a = 5, b =10, c=15;
    char d='x';

    //Maior
    if(a>2){
        printf("\n%d eh maior que 2", a);
    }

    //Maior ou igual
    if(c >= b){
        printf("\n %d eh >= %d",c,b);
    }

    //Menor
    if(a<10){
        printf("\n%d eh menor que 2", a);
    }

    //Menor ou igual
    if(b <= c){
        printf("\n %d eh >= %d",b,c);
    }

    //Diferente
    if(c!=10){
        printf("\nc = %d nao eh 10", c);
    }
    if(d!='a'){
        printf("\n %c nao eh a",d);
    }

}
