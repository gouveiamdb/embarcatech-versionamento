#include <stdio.h>
#include "conversoes.h"

// Declaração das funções de conversão
float converter_kmh_para_ms(float kmh);
float converter_ms_para_kmh(float ms);
float converter_kmh_para_mph(float kmh);
float converter_mph_para_kmh(float mph);
float converter_ms_para_mph(float ms);
float converter_mph_para_ms(float mph);

void menu_velocidade() {
    int opcao;     // Opção escolhida pelo usuário
    float valor;   // Valor inserido para conversão

    // Menu de opções
    printf("\n--- Conversao de Velociade ---\n");
    printf("Escolha uma das opções de conversão:\n");
    printf("1 - Converter de Quilômetro por hora (km/h) para Metro por segundo (m/s)\n");
    printf("2 - Converter de Metro por segundo (m/s) para Quilômetro por hora (km/h)\n");
    printf("3 - Converter de Quilômetro por hora (km/h) para Milhas por hora (mph)\n");
    printf("4 - Converter de Milhas por hora (mph) para Quilômetro por hora (km/h)\n");
    printf("5 - Converter de Metro por segundo (m/s) para Milhas por hora (mph)\n");
    printf("6 - Converter de Milhas por hora (mph) para Metro por segundo (m/s)\n");

    // Loop para garantir entrada válida
    do {
        printf("Digite o número da conversão desejada (1-6): ");
        scanf("%d", &opcao);
        if (opcao < 1 || opcao > 6) {
            printf("Opção inválida! Por favor, tente novamente.\n");
        }
    } while (opcao < 1 || opcao > 6);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);
    if (valor < 0) {
        printf("Valor negativo! Considerando módulo do número.\n");
        valor = valor * -1;
    }

    // Prints de saida
    switch (opcao) {
        case 1:
            printf("%.2f km/h equivale a %.2f m/s\n", valor, converter_kmh_para_ms(valor));
            break;
        case 2:
            printf("%.2f m/s equivale a %.2f km/h\n", valor, converter_ms_para_kmh(valor));
            break;
        case 3:
            printf("%.2f km/h equivale a %.2f mph\n", valor, converter_kmh_para_mph(valor));
            break;
        case 4:
            printf("%.2f mph equivale a %.2f km/h\n", valor, converter_mph_para_kmh(valor));
            break;
        case 5:
            printf("%.2f m/s equivale a %.2f mph\n", valor, converter_ms_para_mph(valor));
            break;
        case 6:
            printf("%.2f mph equivale a %.2f m/s\n", valor, converter_mph_para_ms(valor));
            break;
    }

}

// Função para converter de quilômetros por hora (km/h) para metros por segundo (m/s)
float converter_kmh_para_ms(float kmh) {
    return kmh / 3.6;
}

// Função para converter de metros por segundo (m/s) para quilômetros por hora (km/h)
float converter_ms_para_kmh(float ms) {
    return ms * 3.6;
}

// Função para converter de quilômetros por hora (km/h) para milhas por hora (mph)
float converter_kmh_para_mph(float kmh) {
    return kmh * 0.621371;
}

// Função para converter de milhas por hora (mph) para quilômetros por hora (km/h)
float converter_mph_para_kmh(float mph) {
    return mph / 0.621371;
}

// Função para converter de metros por segundo (m/s) para milhas por hora (mph)
float converter_ms_para_mph(float ms) {
    return ms * 2.23694;
}

// Função para converter de milhas por hora (mph) para metros por segundo (m/s)
float converter_mph_para_ms(float mph) {
    return mph / 2.23694;
}