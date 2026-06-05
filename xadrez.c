#include <stdio.h>

// Função recursiva da Torre
void moverTorre(int casas)
{
    if(casas == 0)
    {
        return;
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva da Rainha
void moverRainha(int casas)
{
    if(casas == 0)
    {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva do Bispo
void moverBispo(int casas)
{
    if(casas == 0)
    {
        return;
    }

    // Loops aninhados exigidos pelo desafio
    for(int vertical = 1; vertical <= 1; vertical++)
    {
        int horizontal = 1;

        while(horizontal <= 1)
        {
            printf("Cima Direita\n");
            horizontal++;
        }
    }

    moverBispo(casas - 1);
}

int main() {

    int i, casasTorre;

    // Pergunta ao usuário quantas casas a Torre deve andar
    printf("Quantas casas a Torre deve se mover? ");
    scanf("%d", &casasTorre);
    
    // Movimento da Torre usando recursividade
    printf("\nMovimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do Bispo usando recursividade e loops aninhados
    printf("\nMovimento do Bispo:\n");

    // Bispo: 5 casas na diagonal
    moverBispo(5);
    
    // Movimento da Rainha usando recursividade
    printf("\nMovimento da Rainha:\n");

    // Rainha: 8 casas para a esquerda
    moverRainha(8);

    // Movimento do Cavalo usando loops aninhados
    // O loop externo controla as duas casas para cima.
    // O loop interno controla a uma casa para a direita.
    printf("\nMovimento do Cavalo:\n");

// Loop externo controla o movimento vertical
for(i = 1; i <= 2; i++)
{
    printf("Cima\n");

    // Loop interno controla o movimento horizontal
    int j = 1;

    while(j <= 1)
    {
        if(i == 2)
        {
            printf("Direita\n");
            break; // encerra o loop interno após mover uma casa para a direita
        }

        j++;
    }
}
    return 0;
}
