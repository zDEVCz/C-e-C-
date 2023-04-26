#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){
    //Imprime na tela
    printf("\nHello, World!\n");

    // Definindo variaveis
    int a = 6, opcao = 3;
    float b = 2.5;
    char c = 'x';

    //Condicionais Simples
    if (a==5){
        printf("A variavel a = 5\n");
    }else{
        printf("A variavel a = 6\n");
    }

    if (b==2.5){
        printf("A variavel b = 2.5\n");
    }

    if (c=='x'){
        printf("A variavel c = letra 'x'\n");
    }

    //Número par ou impar
    if(a % 2 == 1){
        printf("A variavel a eh impar\n");
    }else{
        printf("A variavel a eh par\n");
    }

    //Condicional Composta
    if(opcao==1){
        printf("\nA opcao = 1\n");
    }else if(opcao==2){
        printf("\nA opcao = 2\n");
    }else{
        printf("\nA opcao nao eh igual a 1 e nem 2\n");
    }
}
