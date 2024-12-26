#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "../src/conversoes.h"

#define EPSILON 0.0001

int aproximadamente_igual(float a, float b) {
    return fabs(a - b) < EPSILON;
}

void test_kmh_ms() {
    // km/h para m/s
    assert(aproximadamente_igual(converter_kmh_para_ms(36.0), 10.0));
    assert(aproximadamente_igual(converter_kmh_para_ms(0.0), 0.0));
    
    // m/s para km/h
    assert(aproximadamente_igual(converter_ms_para_kmh(10.0), 36.0));
    assert(aproximadamente_igual(converter_ms_para_kmh(0.0), 0.0));
    
    printf("✓ Todos os testes de conversão km/h <-> m/s passaram!\n");
}

void test_kmh_mph() {
    // km/h para mph
    assert(aproximadamente_igual(converter_kmh_para_mph(100.0), 62.1371));
    assert(aproximadamente_igual(converter_kmh_para_mph(0.0), 0.0));
    
    // mph para km/h
    assert(aproximadamente_igual(converter_mph_para_kmh(62.1371), 100.0));
    assert(aproximadamente_igual(converter_mph_para_kmh(0.0), 0.0));
    
    printf("✓ Todos os testes de conversão km/h <-> mph passaram!\n");
}

void test_ms_mph() {
    // m/s para mph
    assert(aproximadamente_igual(converter_ms_para_mph(10.0), 22.3694));
    assert(aproximadamente_igual(converter_ms_para_mph(0.0), 0.0));
    
    // mph para m/s
    assert(aproximadamente_igual(converter_mph_para_ms(22.3694), 10.0));
    assert(aproximadamente_igual(converter_mph_para_ms(0.0), 0.0));
    
    printf("✓ Todos os testes de conversão m/s <-> mph passaram!\n");
}

int main() {
    printf("\nIniciando testes de conversão de velocidade...\n");
    
    test_kmh_ms();
    test_kmh_mph();
    test_ms_mph();
    
    printf("\nTodos os testes de velocidade completados com sucesso!\n");
    return 0;
}
