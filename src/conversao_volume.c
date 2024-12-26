#include <stdio.h>
#include "conversoes.h"

// Funções para conversão de unidades
double converter_volume(double valor, int unidade_origem, int unidade_destino) {
    // Fatores de conversão (em relação ao litro como base comum)
    double fatores[] = {1.0, 1000.0, 0.001}; // Litros, Mililitros, Metros cúbicos
    double em_litros = valor * fatores[unidade_origem];  // Converte para litros como base comum
    return em_litros / fatores[unidade_destino];         // Converte da base comum para a unidade destino
}

void menu_volume() {
    int unidade_origem, unidade_destino;
    double valor, resultado;

    printf("\n--- Conversao de Volume ---\n");
    printf("Unidades disponíveis:\n");
    printf("0. Litros (L)\n");
    printf("1. Mililitros (mL)\n");
    printf("2. Metros cúbicos (m³)\n");

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de origem (0 a 2): ");
    scanf("%d", &unidade_origem);

    if (unidade_origem < 0 || unidade_origem > 2) {
        printf("Unidade de origem inválida!\n");
        return;
    }

    printf("Digite a unidade de destino (0 a 2): ");
    scanf("%d", &unidade_destino);

    if (unidade_destino < 0 || unidade_destino > 2) {
        printf("Unidade de destino inválida!\n");
        return;
    }

    resultado = converter_volume(valor, unidade_origem, unidade_destino);

    printf("\n%.2f na unidade %d equivale a %.2f na unidade %d\n",
           valor, unidade_origem, resultado, unidade_destino);
}
