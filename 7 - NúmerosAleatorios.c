#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    //Permitir usar acentos
    setlocale(LC_ALL,"");

    //Imprime na tela
    printf("\nOlá, Mundo!\n");

    //Responsável por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //Variável que recebe o resto da divisão do número por 3
    int aleatorio = rand() %3;

    //Variável que recebe o resto da divisão do número por 5
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
