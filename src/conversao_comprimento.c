#include <stdio.h>
#include "conversoes.h"

double metros_para_centimetros(double metros) {
    return metros * 100.0;
}

double metros_para_milimetros(double metros) {
    return metros * 1000.0;
}

void menu_comprimento() {
    int opcao;
    double entrada, resultado;

    do {
        printf("\n--- Conversao de Comprimento ---\n");
        printf("1. Metros para Centimetros\n");
        printf("2. Metros para Milimetros\n");
        printf("3. Voltar ao Menu Principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor em metros: ");
                scanf("%lf", &entrada);
                resultado = metros_para_centimetros(entrada);
                printf("%.2f metros equivalem a %.2f centimetros\n", entrada, resultado);
                break;
            case 2:
                printf("Digite o valor em metros: ");
                scanf("%lf", &entrada);
                resultado = metros_para_milimetros(entrada);
                printf("%.2f metros equivalem a %.2f milimetros\n", entrada, resultado);
                break;
            case 3:
                printf("Voltando ao menu principal\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 3);
}
