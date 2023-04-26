#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){
    //Imprime na tela
    printf("\nHello, World!\n");

    // Definindo variaveis
    int a = 5, b = 3;

    //soma
    printf("\nA soma de %d e %d = %d", a, b, a + b);

    //subtração
    printf("\nA subtracao de %d e %d = %d", a, b, a - b);

    //Divisão
    printf("\nA divisao de %d e %d = %d", a, b, a / b);

    //Multiplicação
    printf("\nA multiplicacao de %d e %d = %d", a, b, a * b);

    //Resto da divisão
    printf("\nO resto da divisao de %d e %d = %d", a, b, a % b);

    //Valor absoluto
    printf("\nO valor absoluto de -3 = %d", abs(-3));

    //Pausa o programa após executar
    system('pause');

}
