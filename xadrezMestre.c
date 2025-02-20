#include <stdio.h>

// Definindo constantes para as direções
#define CIMA "Cima"
#define BAIXO "Baixo"
#define ESQUERDA "Esquerda"
#define DIREITA "Direita"

// Função recursiva para movimentar o Bispo (diagonal direita para cima)
void moverBispo(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("%s e %s\n", CIMA, DIREITA); // Movimento diagonal
    moverBispo(casas - 1); // Chamada recursiva
}

// Função recursiva para movimentar a Torre (para a direita)
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("%s\n", DIREITA); // Movimento para a direita
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para movimentar a Rainha (para a esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("%s\n", ESQUERDA); // Movimento para a esquerda
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para movimentar o Cavalo (em L para cima à direita)
void moverCavalo() {
    printf("Movimentação do Cavalo:\n");
    for (int i = 1; i <= 2; i++) { // 2 passos para cima
        if (i == 2) {
            printf("%s\n", CIMA); // Segundo passo para cima
            continue; // Pula para a próxima iteração
        }
        printf("%s\n", CIMA); // Primeiro passo para cima
    }
    for (int j = 1; j <= 1; j++) { // 1 passo para a direita
        printf("%s\n", DIREITA); // Passo para a direita
    }
}

int main() {
    // Movimentação do Bispo (5 casas na diagonal direita para cima)
    printf("Movimentação do Bispo:\n");
    moverBispo(5);

    // Movimentação da Torre (5 casas para a direita)
    printf("\nMovimentação da Torre:\n");
    moverTorre(5);

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimentação da Rainha:\n");
    moverRainha(8);

    // Movimentação do Cavalo (1 vez em L para cima à direita)
    moverCavalo();

    return 0;
}