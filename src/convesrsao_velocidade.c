#include <stdio.h>

// Declaração das funções de conversão
float converter_kmh_para_ms(float kmh);
float converter_ms_para_kmh(float ms);
float converter_kmh_para_mph(float kmh);
float converter_mph_para_kmh(float mph);
float converter_ms_para_mph(float ms);
float converter_mph_para_ms(float mph);

//Declaração da função de retorno, com base no caso selecionado
void realizar_conversao(int opcao, float valor);

int main() {
    float valor; // Valor inserido pelo usuário para conversão
    int opcao; // Opção escolhida pelo usuário no menu

    // Apresenta o menu de opções ao usuário
    printf("\n--- Conversao de Velociade ---\n");
    printf("Escolha uma das opções de conversão:\n");
    printf("1 - Converter de Quilômetro por hora (km/h) para Metro por segundo (m/s)\n");
    printf("2 - Converter de Metro por segundo (m/s) para Quilômetro por hora (km/h)\n");
    printf("3 - Converter de Quilômetro por hora (km/h) para Milhas por hora (mph)\n");
    printf("4 - Converter de Milhas por hora (mph) para Quilômetro por hora (km/h)\n");
    printf("5 - Converter de Metro por segundo (m/s) para Milhas por hora (mph)\n");
    printf("6 - Converter de Milhas por hora (mph) para Metro por segundo (m/s)\n");

    // Solicita ao usuário que insira a opção de conversão desejada
    printf("Digite o número da conversão desejada: ");
    scanf("%d", &opcao);

    // Solicita ao usuário que insira o valor para conversão
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    // Chama a função para realizar a conversão
    realizar_conversao(opcao, valor);

    return 0;
}

// Função para realizar a conversão com base na opção escolhida
void realizar_conversao(int opcao, float valor) {
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
        default:
            printf("Opção inválida! Por favor, tente novamente.\n");
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
