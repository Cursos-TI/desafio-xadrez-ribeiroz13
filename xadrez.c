#include <stdio.h>

//Dasafio xadrez - MateCheck

int main() {
    // Tabuleiro vai de 1 até 8 nas linhas e colunas
    const int MIN_POS = 1;
    const int MAX_POS = 8;

    // Torre (usando for)

    int casas_torre = 5;
    int linha_torre = 4;
    int coluna_torre = 3;

    printf("=== Movimento da TORRE ===\n");

    for (int i = 1; i <= casas_torre; i++) {
        if (coluna_torre + 1 > MAX_POS) {
            printf("Limite do tabuleiro atingido!\n");
            break;
        }
        coluna_torre++;
        printf("Direita (%d casa) → Posição: (%d, %d)\n", i, linha_torre, coluna_torre);
    }

    // Bispo (usando while)

    int casas_bispo = 5;
    int linha_bispo = 5;
    int coluna_bispo = 3;
    int i = 1;

    printf("\n=== Movimento do BISPO ===\n");

    while (i <= casas_bispo) {
        if (linha_bispo - 1 < MIN_POS || coluna_bispo + 1 > MAX_POS) {
            printf("Limite do tabuleiro atingido!\n");
            break;
        }
        linha_bispo--;
        coluna_bispo++;
        printf("Cima, Direita (%d casa) → Posição: (%d, %d)\n", i, linha_bispo, coluna_bispo);
        i++;
    }

    // Rainha (usando do-while)
    
    int casas_rainha = 8;
    int linha_rainha = 3;
    int coluna_rainha = 8;
    int j = 1;

    printf("\n=== Movimento da RAINHA ===\n");

    do {
        if (coluna_rainha - 1 < MIN_POS) {
            printf("Limite do tabuleiro atingido!\n");
            break;
        }
        coluna_rainha--;
        printf("Esquerda (%d casa) → Posição: (%d, %d)\n", j, linha_rainha, coluna_rainha);
        j++;
    } while (j <= casas_rainha);

    printf("\nSimulação concluída!\n");
    return 0;
}