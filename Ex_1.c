// DIVISORES DE UM NÚMERO:
#include <stdio.h>
void divisores (long long n) {
    long long i;
    for (i=1 ; i<=n/2 ; ++i){ // procura até o número divido por dois pq o maior divisor de um número é o número dividido por 2.
        if (n%i==0){
            printf("%lld\n", i);
        }
    }
    printf("%lld\n",n);
}
int main(){
    long long p;
    scanf("%lld",&p);
    divisores(p);
    return 0;
}