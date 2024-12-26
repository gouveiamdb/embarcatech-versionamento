#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "../src/conversoes.h"

#define EPSILON 0.0001

int aproximadamente_igual(double a, double b) {
    return fabs(a - b) < EPSILON;
}

void test_conversoes_quilogramas() {
    // Quilogramas para gramas
    assert(aproximadamente_igual(converterQuilogramasParaGramas(1.0), 1000.0));
    assert(aproximadamente_igual(converterQuilogramasParaGramas(0.5), 500.0));
    
    // Quilogramas para toneladas
    assert(aproximadamente_igual(converterQuilogramasParaToneladas(1000.0), 1.0));
    assert(aproximadamente_igual(converterQuilogramasParaToneladas(500.0), 0.5));
    
    printf("✓ Todos os testes de conversões de quilogramas passaram!\n");
}

void test_conversoes_gramas() {
    // Gramas para quilogramas
    assert(aproximadamente_igual(converterGramasParaQuilogramas(1000.0), 1.0));
    assert(aproximadamente_igual(converterGramasParaQuilogramas(500.0), 0.5));
    
    // Gramas para toneladas
    assert(aproximadamente_igual(converterGramasParaToneladas(1000000.0), 1.0));
    assert(aproximadamente_igual(converterGramasParaToneladas(500000.0), 0.5));
    
    printf("✓ Todos os testes de conversões de gramas passaram!\n");
}

void test_conversoes_toneladas() {
    // Toneladas para quilogramas
    assert(aproximadamente_igual(converterToneladasParaQuilogramas(1.0), 1000.0));
    assert(aproximadamente_igual(converterToneladasParaQuilogramas(0.5), 500.0));
    
    // Toneladas para gramas
    assert(aproximadamente_igual(converterToneladasParaGramas(1.0), 1000000.0));
    assert(aproximadamente_igual(converterToneladasParaGramas(0.5), 500000.0));
    
    printf("✓ Todos os testes de conversões de toneladas passaram!\n");
}

int main() {
    printf("\nIniciando testes de conversão de massa...\n");
    
    test_conversoes_quilogramas();
    test_conversoes_gramas();
    test_conversoes_toneladas();
    
    printf("\nTodos os testes de massa completados com sucesso!\n");
    return 0;
}
