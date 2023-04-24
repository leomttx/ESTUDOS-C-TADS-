#include <stdio.h>

int main() {
    char nome[21]; // "Definindo o número de caracteres da variável"
     printf("Digite seu nome:");
     scanf("%s", &nome); // Chamandoo o vetor de caracteres.
     printf("Olá %s seja bem vindo ao mundo C.", nome);
     return 0;
}