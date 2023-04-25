#include <stdio.h>

int main() {
    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *ponteiroX = &x;
    double *ponteiroY = &y;
    char *ponteiroZ = &z;

    printf("Endereço x = %i valor x = %i\n", ponteiroX, &ponteiroX);
    printf("Endereço y = %i valor y = %f\n", ponteiroY, &ponteiroY);
    printf("Endereço z = %i valor z = %c\n", ponteiroZ, &ponteiroZ);

    return 0;
}