// Maior entre os volumes:
#include <stdio.h>

int volume(int largura1, int altura1, int profundidade1, 
int largura2, int profundidade2, int altura2){
    if ((largura1 * altura1 * profundidade1) == (largura2 * altura2 * profundidade2)){
        return 0;
    }
    if ((largura1 * profundidade1 * altura1) > (largura2 * profundidade2 * altura2)){
        return 1;
    }
    if ((largura1 * profundidade1 * altura1) < (largura2 * profundidade2 * altura2)){
        return 2;
    }
    return 0;
}
int main() {
    int largura1, largura2, profundidade1, profundidade2, altura1, altura2;
    scanf("%d %d %d", &largura1, &profundidade1, &altura1);
    scanf("%d %d %d", &largura2, &profundidade2, &altura2);
    printf("%d", volume(largura1, altura1, profundidade1, largura2, profundidade2, altura2));
    return 0;
}