#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Permitir usar acentos
    setlocale(LC_ALL,"");

    //Imprime na tela
    printf("\nOlá, Mundo!\n");

    //Definindo Variáveis
    int a;
    char b;

    //Passando Valores
    a = 3;
    b = 'x';

    //Código de exemplo com if
    if(a==1){
        printf("\n Opção escolhida: 1");
    }else if(a==2){
        printf("\n Opção escolhida: 2");
    }else if(a==3){
        printf("\n Opção escolhida: 3");
    }else{
        printf("\n opção invalida");
    }

    //O mesmo código de cima, adaptado ao switch
    switch(a){
    case 1:
        printf("\n Opção escolhida: 1");
        break;
    case 2:
        printf("\n Opção escolhida: 2");
        break;
    case 3:
        printf("\n Opção escolhida: 3");
        break;
    default:
        printf("\n opção invalida");
        break;
    }

    //Switch com char
    switch(b){
    case 'x':
        printf("\n Opção escolhida: x");
        break;
    default:
        printf("\n opção invalida");
        break;
    }
}
