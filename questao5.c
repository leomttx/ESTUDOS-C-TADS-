#include <stdio.h>

int somartodos (int a, int b, int c, int d) {
    int soma;
    soma = a + b + c + d;
    return soma;
}

int main() {
    int n1, n2, n3, n4, n;
    scanf("%d", &n);
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    printf("A soma dos números é %d\n",somartodos(n1, n2, n3, n4));
    return 0;
}