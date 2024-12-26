#include <stdio.h>
#include "conversoes.h"

// Funções para conversão de temperatura
double converter_temperatura(double valor, int unidade_origem, int unidade_destino) {
    double resultado = valor;

    // Converte para Celsius como base comum
    if (unidade_origem == 1) { // Fahrenheit para Celsius
        resultado = (valor - 32) * 5.0 / 9.0;
    } else if (unidade_origem == 2) { // Kelvin para Celsius
        resultado = valor - 273.15;
    }

    // Converte de Celsius para a unidade de destino
    if (unidade_destino == 1) { // Celsius para Fahrenheit
        resultado = (resultado * 9.0 / 5.0) + 32;
    } else if (unidade_destino == 2) { // Celsius para Kelvin
        resultado = resultado + 273.15;
    }

    return resultado;
}

void menu_temperatura() {
    int unidade_origem, unidade_destino;
    double valor, resultado;

    printf("\n--- Conversao de Temperatura ---\n");
    printf("Unidades disponíveis:\n");
    printf("0. Celsius (°C)\n");
    printf("1. Fahrenheit (°F)\n");
    printf("2. Kelvin (K)\n");

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

    resultado = converter_temperatura(valor, unidade_origem, unidade_destino);

    printf("\n%.2f na unidade %d equivale a %.2f na unidade %d\n",
           valor, unidade_origem, resultado, unidade_destino);
}
