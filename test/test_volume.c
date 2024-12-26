#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "../src/conversoes.h"

#define EPSILON 0.0001

int aproximadamente_igual(double a, double b) {
    return fabs(a - b) < EPSILON;
}

void test_converter_volume() {
    // Litros para mililitros
    assert(aproximadamente_igual(converter_volume(1.0, 0, 1), 1000.0));
    
    // Mililitros para litros
    assert(aproximadamente_igual(converter_volume(1000.0, 1, 0), 1.0));
    
    // Litros para metros cúbicos
    assert(aproximadamente_igual(converter_volume(1000.0, 0, 2), 1.0));
    
    // Metros cúbicos para litros
    assert(aproximadamente_igual(converter_volume(1.0, 2, 0), 1000.0));
    
    // Mililitros para metros cúbicos
    assert(aproximadamente_igual(converter_volume(1000000.0, 1, 2), 1.0));
    
    // Metros cúbicos para mililitros
    assert(aproximadamente_igual(converter_volume(1.0, 2, 1), 1000000.0));
    
    printf("✓ Todos os testes de conversão de volume passaram!\n");
}

void test_casos_especiais() {
    // Teste com zero
    assert(aproximadamente_igual(converter_volume(0.0, 0, 1), 0.0));
    assert(aproximadamente_igual(converter_volume(0.0, 1, 2), 0.0));
    
    // Teste valores negativos
    assert(aproximadamente_igual(converter_volume(-1.0, 0, 1), -1000.0));
    assert(aproximadamente_igual(converter_volume(-1.0, 2, 0), -1000.0));
    
    printf("✓ Todos os testes de casos especiais de volume passaram!\n");
}

int main() {
    printf("\nIniciando testes de conversão de volume...\n");
    
    test_converter_volume();
    test_casos_especiais();
    
    printf("\nTodos os testes de volume completados com sucesso!\n");
    return 0;
}
