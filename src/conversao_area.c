#include <stdio.h>
#include "conversoes.h"

double metroQuadrado_para_centimetroQuadrado(double metros) {
    return metros * 10000.0;
}

double centimetroQuadrado_para_metroQuadrado(double centimetro) {
    return centimetro/10000.0;
}

void menu_area() {
    int opcao;
    double entrada, resultado;

    do {
        printf("\n--- Conversao de Area ---\n");
        printf("1. Centimetros quadrados para metros quadrados\n");
        printf("2. Metro quadrado para centímetros quadrados\n");
        printf("3. Voltar ao Menu Principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor em metros: ");
                scanf("%lf", &entrada);
                resultado = centimetroQuadrado_para_metroQuadrado(entrada);
                printf("%.2f centimetros quadrados equivalem a %.4f metros quadrados\n", entrada, resultado);
                break;
            case 2:
                printf("Digite o valor em metros: ");
                scanf("%lf", &entrada);
                resultado = metroQuadrado_para_centimetroQuadrado(entrada);
                printf("%.2f metros quadrados equivalem a %.2f centimetros quadrados\n", entrada, resultado);
                break;
            case 3:
                printf("Voltando ao menu principal\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 3);
}
