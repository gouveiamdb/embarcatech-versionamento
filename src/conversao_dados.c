#include <stdio.h>
#include "conversoes.h"

// Funções para conversão de unidades
double converter_dados(double valor, int unidade_origem, int unidade_destino) {
    double fatores[] = {1.0, 8.0, 1024.0, 1024.0 * 1024.0, 1024.0 * 1024.0 * 1024.0};
    double em_bits = valor * fatores[unidade_origem];  // Converte para bits como base comum
    return em_bits / fatores[unidade_destino];         // Converte da base comum para a unidade destino
}

void menu_dados() {
    int unidade_origem, unidade_destino;
    double valor, resultado;

    printf("\n--- Conversao de Dados ---\n");
    printf("Unidades disponíveis:\n");
    printf("0. Bits\n");
    printf("1. Bytes\n");
    printf("2. Kilobytes (KB)\n");
    printf("3. Megabytes (MB)\n");
    printf("4. Gigabytes (GB)\n");

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de origem (0 a 4): ");
    scanf("%d", &unidade_origem);

    if (unidade_origem < 0 || unidade_origem > 4) {
        printf("Unidade de origem inválida!\n");
        return;
    }

    printf("Digite a unidade de destino (0 a 4): ");
    scanf("%d", &unidade_destino);

    if (unidade_destino < 0 || unidade_destino > 4) {
        printf("Unidade de destino inválida!\n");
        return;
    }

    resultado = converter_dados(valor, unidade_origem, unidade_destino);

    printf("\n%.2f na unidade %d equivale a %.2f na unidade %d\n",
           valor, unidade_origem, resultado, unidade_destino);
}