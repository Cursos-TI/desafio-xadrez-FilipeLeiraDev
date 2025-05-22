#include <stdio.h>

int main() {
    // ========================
    // Simulação da Torre (for)
    // ========================
    int i;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // ========================
    // Simulação do Bispo (while)
    // ========================
    int j = 1;
    printf("\nMovimento do Bispo (5 casas na Diagonal - Cima Direita):\n");
    while (j <= 5) {
        printf("Casa %d: Cima Direita\n", j);
        j++;
    }

    // ========================
    // Simulação da Rainha (do-while)
    // ========================
    int k = 1;
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= 8);

    return 0;
}
