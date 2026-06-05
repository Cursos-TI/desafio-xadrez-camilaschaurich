#include <stdio.h>

int main() {

    int i;

    printf("Movimento da Torre:\n");

    // Torre: 5 casas para a direita
    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");

    // Bispo: 5 casas na diagonal
    i = 1;
    while(i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\nMovimento da Rainha:\n");

    // Rainha: 8 casas para a esquerda
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while(i <= 8);

    return 0;
}