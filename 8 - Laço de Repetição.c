#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    //Permitir usar acentos
    setlocale(LC_ALL,"");

    //Imprime na tela
    printf("\nOl�, Mundo!\n");

    //Vari�vel
    int a = 1, b = 10;

    //Comando de repeti��o
    while(a <= 10){
        //imprimindo 'a' na tela
        printf("\n%d", a);
        //Incremento
        a++;      //a = a + 1;
    }

    //Comando de repeti��o
    while(b >= 1){
        //imprimindo 'b' na tela
        printf("\n%d", b);
        //Incremento
        b--;      //b = b - 1;
    }
}
