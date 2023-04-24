// Função de Multiplicação:
#include <stdio.h>

int mult(int x, int y) {
    int r;
    r = x * y;
    return  r;
}

int main() {
    int a, b, r;
    scanf("%d %d", &a, &b);
    r = mult(a, b);
    printf("%d * %d = %d", a, b, r);
    return 0;
}