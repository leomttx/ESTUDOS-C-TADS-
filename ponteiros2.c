#include <stdio.h>

int main() {
    int a;
    int *p; // "p" aponta para um endereço de memória. E esse endereço contém um valor inteiro
    p = &a;
    a = 10;

    printf("Endereço de a: %p (%lld)\n", &a, (long long)&a); // %p representa o endereço de memória em formatos Exadecimal.
    printf("Valor armazenado a: %d\n", a);
    printf("Endereço de p: %p (%lld)\n", &p, (long long)&p);
    printf("Valor armazenado em p: %p\n", p); // O valor armazenado em p é o endereço de a.
    printf("Valor onde p aponta: %d\n", *p);  // Mostra o valor armazenado no espaço e memória apontado por p. Que no caso é a.

    *p = 13;
    printf("Endereço de a: %p (%lld)\n", &a, (long long)&a); 
    printf("Valor armazenado a: %d\n", a);
    return 0;
}