#include <stdio.h>
#include <stdlib.h>

//Fun��o principal do programa
void main(){
    //Imprime na tela
    printf("\nHello, World!\n");

    // Definindo variaveis
    int a = 5, b = 3;

    //soma
    printf("\nA soma de %d e %d = %d", a, b, a + b);

    //subtra��o
    printf("\nA subtracao de %d e %d = %d", a, b, a - b);

    //Divis�o
    printf("\nA divisao de %d e %d = %d", a, b, a / b);

    //Multiplica��o
    printf("\nA multiplicacao de %d e %d = %d", a, b, a * b);

    //Resto da divis�o
    printf("\nO resto da divisao de %d e %d = %d", a, b, a % b);

    //Valor absoluto
    printf("\nO valor absoluto de -3 = %d", abs(-3));

    //Pausa o programa ap�s executar
    system('pause');

}
