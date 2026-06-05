#include <stdio.h>

int main() {

    int i, casasTorre;

    printf("Quantas casas a Torre deve se mover? ");
    scanf("%d", &casasTorre);

    printf("\nMovimento da Torre:\n");

    for(i = 1; i <= casasTorre; i++)
    {
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

    printf("\nMovimento do Cavalo:\n");

for(i = 1; i <= 2; i++)
{
    printf("Baixo\n");

    int j = 1;

    while(j <= 1)
    {
        if(i == 2)
        {
            printf("Esquerda\n");
        }

        j++;
    }
}

    return 0;
}