#include <stdio.h>

// Definindo constantes para as direções
#define CIMA "Cima"
#define BAIXO "Baixo"
#define ESQUERDA "Esquerda"
#define DIREITA "Direita"

int main() {
    // Declaração de variáveis para o número de casas a serem percorridas
    int casasBispo = 5;
    int casasTorre = 5;
    int casasRainha = 8;

    // Movimentação do Bispo (diagonal superior direita)
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= casasBispo; i++) {
        printf("%s e %s\n", CIMA, DIREITA); // Combinação de direções para a diagonal(cima&direita)
    }

    // Movimentação da Torre (para a direita)
    printf("\nMovimentação da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("%s\n", DIREITA);
    }

    // Movimentação da Rainha (para a esquerda)
    printf("\nMovimentação da Rainha:\n");
    int i = 1;
    while (i <= casasRainha) {
        printf("%s\n", ESQUERDA);
        i++;
    }

    return 0;
}