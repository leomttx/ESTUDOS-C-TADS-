#include <stdio.h>

int soma (int a, int b) { // função de soma.
    int r;
    r = a + b;
    return r;
}

int main() {
    int a, b, s;
    scanf("%d", &a);
    scanf("%d", &b);
    s = soma(a, b); // chamada da função.
    printf("O primeiro valor foi %d e o segundo foi %d a soma dos valores será %d\n", a, b, s);
    return 0; // lembrar de sempre colocar.
}