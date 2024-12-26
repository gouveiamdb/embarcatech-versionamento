#include <stdio.h>
#include <stdlib.h>
#include "conversoes.h"

// Declarações das funções
void menu_massa();
void exibirMenu();
double converterMassa(double valor, int unidadeOrigem, int unidadeDestino);
double converterQuilogramasParaGramas(double valor);
double converterQuilogramasParaToneladas(double valor);
double converterGramasParaQuilogramas(double valor);
double converterGramasParaToneladas(double valor);
double converterToneladasParaQuilogramas(double valor);
double converterToneladasParaGramas(double valor);
void limparEntrada();

void menu_massa() {
    int unidadeOrigem, unidadeDestino;
    double valor, resultado;

    printf("Conversor de Unidades de Massa\n\n");
    
    // Entrada do valor
    printf("Digite o valor da massa: ");
    if (scanf("%lf", &valor) != 1) {
        printf("Entrada inválida!\n");
        return;
    }

    // Exibir menu e obter unidade de origem
    printf("\nEscolha a unidade de origem:\n");
    exibirMenu();
    printf("Opção: ");
    if (scanf("%d", &unidadeOrigem) != 1 || unidadeOrigem < 1 || unidadeOrigem > 3) {
        printf("Unidade de origem inválida!\n");
        return;
    }

    // Exibir menu e obter unidade de destino
    printf("\nEscolha a unidade de destino:\n");
    exibirMenu();
    printf("Opção: ");
    if (scanf("%d", &unidadeDestino) != 1 || unidadeDestino < 1 || unidadeDestino > 3) {
        printf("Unidade de destino inválida!\n");
        return;
    }

    // Realizar a conversão
    resultado = converterMassa(valor, unidadeOrigem, unidadeDestino);

    // Exibir o resultado
    if (resultado != -1) {
        printf("\n%.2lf na unidade %d equivale a %.2lf na unidade %d.\n", valor, unidadeOrigem, resultado, unidadeDestino);
    } else {
        printf("\nConversão inválida!\n");
    }

    // Finaliza a execução de forma limpa
    return;
}

void exibirMenu() {
    printf("1. Quilograma (kg)\n");
    printf("2. Grama (g)\n");
    printf("3. Tonelada (t)\n");
}

double converterQuilogramasParaGramas(double valor) {
    return valor * 1000.0;
}

double converterQuilogramasParaToneladas(double valor) {
    return valor / 1000.0;
}

double converterGramasParaQuilogramas(double valor) {
    return valor / 1000.0;
}

double converterGramasParaToneladas(double valor) {
    return valor / 1000000.0;
}

double converterToneladasParaQuilogramas(double valor) {
    return valor * 1000.0;
}

double converterToneladasParaGramas(double valor) {
    return valor * 1000000.0;
}

double converterMassa(double valor, int unidadeOrigem, int unidadeDestino) {
    if (unidadeOrigem == unidadeDestino) {
        return valor; // Mesma unidade
    }

    switch (unidadeOrigem) {
        case 1: // Quilograma
            if (unidadeDestino == 2) {
                return converterQuilogramasParaGramas(valor);
            } else if (unidadeDestino == 3) {
                return converterQuilogramasParaToneladas(valor);
            }
            break;
        case 2: // Grama
            if (unidadeDestino == 1) {
                return converterGramasParaQuilogramas(valor);
            } else if (unidadeDestino == 3) {
                return converterGramasParaToneladas(valor);
            }
            break;
        case 3: // Tonelada
            if (unidadeDestino == 1) {
                return converterToneladasParaQuilogramas(valor);
            } else if (unidadeDestino == 2) {
                return converterToneladasParaGramas(valor);
            }
            break;
        default:
            printf("Unidade inválida!\n");
            return -1;
    }

    printf("Conversão não suportada!\n");
    return -1;
}

void limparEntrada() {
    while (getchar() != '\n');
}
