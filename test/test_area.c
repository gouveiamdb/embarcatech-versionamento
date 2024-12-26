#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "../src/conversoes.h"

#define EPSILON 0.0001

int aproximadamente_igual(double a, double b) {
    return fabs(a - b) < EPSILON;
}

void test_metroQuadrado_para_centimetroQuadrado() {
    // Teste com valor inteiro
    assert(aproximadamente_igual(metroQuadrado_para_centimetroQuadrado(1.0), 10000.0));
    
    // Teste com valor decimal
    assert(aproximadamente_igual(metroQuadrado_para_centimetroQuadrado(0.5), 5000.0));
    
    // Teste com zero
    assert(aproximadamente_igual(metroQuadrado_para_centimetroQuadrado(0.0), 0.0));
    
    // Teste com valor negativo
    assert(aproximadamente_igual(metroQuadrado_para_centimetroQuadrado(-1.0), -10000.0));
    
    printf("✓ Todos os testes de metro quadrado para centímetro quadrado passaram!\n");
}

void test_centimetroQuadrado_para_metroQuadrado() {
    // Teste com valor inteiro
    assert(aproximadamente_igual(centimetroQuadrado_para_metroQuadrado(10000.0), 1.0));
    
    // Teste com valor decimal
    assert(aproximadamente_igual(centimetroQuadrado_para_metroQuadrado(5000.0), 0.5));
    
    // Teste com zero
    assert(aproximadamente_igual(centimetroQuadrado_para_metroQuadrado(0.0), 0.0));
    
    printf("✓ Todos os testes de centímetro quadrado para metro quadrado passaram!\n");
}

int main() {
    printf("\nIniciando testes de conversão de área...\n");
    
    test_metroQuadrado_para_centimetroQuadrado();
    test_centimetroQuadrado_para_metroQuadrado();
    
    printf("\nTodos os testes de área completados com sucesso!\n");
    return 0;
}
