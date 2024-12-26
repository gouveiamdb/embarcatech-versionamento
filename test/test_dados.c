#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "../src/conversoes.h"

#define EPSILON 0.0001

int aproximadamente_igual(double a, double b) {
    return fabs(a - b) < EPSILON;
}

void test_converter_dados() {
    // Teste de bits para bytes
    assert(aproximadamente_igual(converter_dados(8.0, 0, 1), 1.0));
    
    // Teste de bytes para kilobytes
    assert(aproximadamente_igual(converter_dados(1024.0, 1, 2), 1.0));
    
    // Teste de kilobytes para megabytes
    assert(aproximadamente_igual(converter_dados(1024.0, 2, 3), 1.0));
    
    // Teste de megabytes para gigabytes
    assert(aproximadamente_igual(converter_dados(1024.0, 3, 4), 1.0));
    
    // Teste bytes para bits
    assert(aproximadamente_igual(converter_dados(1.0, 1, 0), 8.0));
    
    // Teste com zero
    assert(aproximadamente_igual(converter_dados(0.0, 0, 1), 0.0));
    
    printf("✓ Todos os testes de conversão de dados passaram!\n");
}

int main() {
    printf("\nIniciando testes de conversão de dados...\n");
    
    test_converter_dados();
    
    printf("\nTodos os testes de dados completados com sucesso!\n");
    return 0;
}
