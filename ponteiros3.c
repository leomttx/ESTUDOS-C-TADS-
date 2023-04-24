#include <stdio.h>

int main () {
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    int *p;
    p = &c;
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);
    printf("e: %d\n", e);

    *p = 100;
    
     // o valor 100 vai para o indereço de memória que p está apontando que é c. Então c recebe 100.

    p = p+1;

    /*o "p" está apontando para o próximo endereço da memória, ou seja, quatro bits a frente.
     Então o p vai apontar para o próximo dado, que será outra variável inteira.*/ 

    *p = 200;

     /*Nesse caso o novo dado, que nesse contexto será a nova variável, vai receber o valor 200 
     pois o p estará apontando para essa nova variável.*/ 

    //p = p + 1;
    //*p = 300;

    //p = p + 1;
    //*p = 400;
    
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);
    printf("e: %d\n", e);

    return 0;
}