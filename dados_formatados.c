#include <stdio.h>


int main() {
    int a = 10;
    int b = 2;
    int soma = a + b;
    double c = 10;
    double d = 2;
    double divisao = c / d;
    printf("Formatação de caracteres com aspas duplas.\n");
    printf("Inteiros: %d + %d = %d\n", a, b, soma); // Usando %d pode fazer a formatação de números inteiros.
    printf("Real: %f dividido por %f = %f\n",c, d, divisao); //Usando %f faz formatação de números reais.
    return 0;
}
