#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    //Permitir usar acentos
    setlocale(LC_ALL,"");

    //Imprime na tela
    printf("\nOl�, Mundo!\n");

    //Respons�vel por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //Vari�vel que recebe o resto da divis�o do n�mero por 3
    int aleatorio = rand() %3;

    //Vari�vel que recebe o resto da divis�o do n�mero por 5
    int aleatoriosegundo = (rand() %5) + 1;

    //Imprime o valor
    printf("\n Valor: %d", aleatorio);
    printf("\n Valor: %d", aleatoriosegundo);

    //Imprime outro valor
    aleatorio = rand() %3;
    aleatoriosegundo = (rand() %5) + 1;

    printf("\n Outro valor: %d", aleatorio);
    printf("\n Outro valor: %d", aleatoriosegundo);

}
