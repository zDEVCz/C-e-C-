#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Permitir usar acentos
    setlocale(LC_ALL,"");

    //Imprime na tela
    printf("\nOl�, Mundo!\n");

    //Definindo Vari�veis
    int a;
    char b;

    //Passando Valores
    a = 3;
    b = 'x';

    //C�digo de exemplo com if
    if(a==1){
        printf("\n Op��o escolhida: 1");
    }else if(a==2){
        printf("\n Op��o escolhida: 2");
    }else if(a==3){
        printf("\n Op��o escolhida: 3");
    }else{
        printf("\n op��o invalida");
    }

    //O mesmo c�digo de cima, adaptado ao switch
    switch(a){
    case 1:
        printf("\n Op��o escolhida: 1");
        break;
    case 2:
        printf("\n Op��o escolhida: 2");
        break;
    case 3:
        printf("\n Op��o escolhida: 3");
        break;
    default:
        printf("\n op��o invalida");
        break;
    }

    //Switch com char
    switch(b){
    case 'x':
        printf("\n Op��o escolhida: x");
        break;
    default:
        printf("\n op��o invalida");
        break;
    }
}
