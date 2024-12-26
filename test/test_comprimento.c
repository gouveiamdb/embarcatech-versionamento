#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "../src/conversoes.h"

#define EPSILON 0.0001

int aproximadamente_igual(double a, double b) {
    return fabs(a - b) < EPSILON;
}

void test_metros_para_centimetros() {
    // Teste com valor inteiro
    assert(aproximadamente_igual(metros_para_centimetros(1.0), 100.0));
    
    // Teste com valor decimal
    assert(aproximadamente_igual(metros_para_centimetros(1.5), 150.0));
    
    // Teste com zero
    assert(aproximadamente_igual(metros_para_centimetros(0.0), 0.0));
    
    // Teste com valor negativo
    assert(aproximadamente_igual(metros_para_centimetros(-1.0), -100.0));
    
    printf("✓ Todos os testes de metros para centímetros passaram!\n");
}

void test_metros_para_milimetros() {
    // Teste com valor inteiro
    assert(aproximadamente_igual(metros_para_milimetros(1.0), 1000.0));
    
    // Teste com valor decimal
    assert(aproximadamente_igual(metros_para_milimetros(0.5), 500.0));
    
    // Teste com zero
    assert(aproximadamente_igual(metros_para_milimetros(0.0), 0.0));
    
    // Teste com valor negativo
    assert(aproximadamente_igual(metros_para_milimetros(-1.0), -1000.0));
    
    printf("✓ Todos os testes de metros para milímetros passaram!\n");
}

int main() {
    printf("\nIniciando testes de conversão de comprimento...\n");
    
    test_metros_para_centimetros();
    test_metros_para_milimetros();
    
    printf("\nTodos os testes de comprimento completados com sucesso!\n");
    return 0;
}
