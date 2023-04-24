#include <stdio.h>

int main() {
    int a, b, c;
    a = 10;
    b = 20;
    c = (a + b) / 2;
    printf("Endereço de a: %ld (%p)\n", &a); // %p representa o endereço de memória em formatos Exadecimal.
    printf("Endereço de a: %ld (%p)\n", &b);
    printf("Endereço de a: %ld (%p)\n", &c);
    return 0;
}