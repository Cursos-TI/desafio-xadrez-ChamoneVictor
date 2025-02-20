#include <stdio.h>

// Definindo constantes para as direções
#define CIMA "Cima"
#define BAIXO "Baixo"
#define ESQUERDA "Esquerda"
#define DIREITA "Direita"

// Função para movimentação do bispo (diagonal superior direita)
void movimentarBispo(int casas) {
    printf("\nMovimentacao do Bispo:\n");
    for (int i = 1; i <= casas; i++) {
        printf("%s e %s\n", CIMA, DIREITA);
    }
}

// Função para movimentação da torre (para a direita)
void movimentarTorre(int casas) {
    printf("\nMovimentacao da Torre:\n");
    for (int i = 1; i <= casas; i++) {
        printf("%s\n", DIREITA);
    }
}

// Função para movimentação da rainha (para a esquerda)
void movimentarRainha(int casas) {
    printf("\nMovimentacao da Rainha:\n");
    int i = 1;
    while (i <= casas) {
        printf("%s\n", ESQUERDA);
        i++;
    }
}

// Função para movimentação do cavalo em "L"
void movimentarCavalo(int movimentos) {
    printf("\nMovimentacao do Cavalo:\n");
    for (int i = 0; i < movimentos; i++) {
        printf("Movimento %d:\n", i + 1);
        // Primeiro movimento: Duas casas para baixo
        for (int j = 0; j < 2; j++) {
            printf("%s\n", BAIXO);
        }
        
        // Segundo movimento: Uma casa para a esquerda
        int k = 0;
        while (k < 1) {
            printf("%s\n", ESQUERDA);
            k++;
        }
    }
}

int main() {
    // Declaração de variáveis para o número de casas a serem percorridas
    int casasBispo = 5;
    int casasTorre = 5;
    int casasRainha = 8;
    int movimentosCavalo = 3;

    // Chama as funções de movimentação
    movimentarBispo(casasBispo);
    movimentarTorre(casasTorre);
    movimentarRainha(casasRainha);
    movimentarCavalo(movimentosCavalo);
    
    return 0;
}
