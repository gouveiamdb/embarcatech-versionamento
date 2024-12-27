#include <stdio.h>
#include "conversoes.h"

double metros_para_centimetros(double metros) {
    return metros * 100.0;
}

double metros_para_milimetros(double metros) {
    return metros * 1000.0;
}

double centimetros_para_metros(double centimetros) {
    return centimetros / 100.0;
}

double centimetros_para_milimetros(double centimetros) {
    return centimetros * 10.0;
}

double milimetros_para_metros(double milimetros) {
    return milimetros / 1000.0;
}

double milimetros_para_centimetros(double milimetros) {
    return milimetros / 10.0;
}

void menu_comprimento() {
    int opcao;
    double entrada, resultado;

    do {
        printf("\n--- Conversao de Comprimento ---\n");
        printf("1. Metros para Centimetros\n");
        printf("2. Metros para Milimetros\n");
        printf("3. Centimetros para Metros\n");
        printf("4. Centimetros para Milimetros\n");
        printf("5. Milimetros para Metros\n");
        printf("6. Milimetros para Centimetros\n");
        printf("7. Voltar ao Menu Principal\n");
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
                printf("Digite o valor em centimetros: ");
                scanf("%lf", &entrada);
                resultado = centimetros_para_metros(entrada);
                printf("%.2f centimetros equivalem a %.2f metros\n", entrada, resultado);
                break;
            case 4:
                printf("Digite o valor em centimetros: ");
                scanf("%lf", &entrada);
                resultado = centimetros_para_milimetros(entrada);
                printf("%.2f centimetros equivalem a %.2f milimetros\n", entrada, resultado);
                break;
            case 5:
                printf("Digite o valor em milimetros: ");
                scanf("%lf", &entrada);
                resultado = milimetros_para_metros(entrada);
                printf("%.2f milimetros equivalem a %.2f metros\n", entrada, resultado);
                break;
            case 6:
                printf("Digite o valor em milimetros: ");
                scanf("%lf", &entrada);
                resultado = milimetros_para_centimetros(entrada);
                printf("%.2f milimetros equivalem a %.2f centimetros\n", entrada, resultado);
                break;
            case 7:
                printf("Voltando ao menu principal\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 7);
}
