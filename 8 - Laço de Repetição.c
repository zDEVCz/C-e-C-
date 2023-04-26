#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    //Permitir usar acentos
    setlocale(LC_ALL,"");

    //Imprime na tela
    printf("\nOlá, Mundo!\n");

    //Variável
    int a = 1, b = 10;

    //Comando de repetição
    while(a <= 10){
        //imprimindo 'a' na tela
        printf("\n%d", a);
        //Incremento
        a++;      //a = a + 1;
    }

    //Comando de repetição
    while(b >= 1){
        //imprimindo 'b' na tela
        printf("\n%d", b);
        //Incremento
        b--;      //b = b - 1;
    }
}
