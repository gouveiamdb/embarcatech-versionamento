// test_temperatura.c
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "../src/conversoes.h"

#define EPSILON 0.0001

int aproximadamente_igual(double a, double b) {
    return fabs(a - b) < EPSILON;
}

void test_celsius_para_fahrenheit() {
    // Teste 1: Ponto de congelamento da água
    assert(aproximadamente_igual(celsius_para_fahrenheit(0.0), 32.0));
    
    // Teste 2: Ponto de ebulição da água
    assert(aproximadamente_igual(celsius_para_fahrenheit(100.0), 212.0));
    
    // Teste 3: Temperatura negativa
    assert(aproximadamente_igual(celsius_para_fahrenheit(-40.0), -40.0));
    
    printf("✓ Todos os testes de Celsius para Fahrenheit passaram!\n");
}

void test_celsius_para_kelvin() {
    // Teste 1: Zero Celsius
    assert(aproximadamente_igual(celsius_para_kelvin(0.0), 273.15));
    
    // Teste 2: -273.15°C (zero absoluto)
    assert(aproximadamente_igual(celsius_para_kelvin(-273.15), 0.0));
    
    printf("✓ Todos os testes de Celsius para Kelvin passaram!\n");
}

void test_fahrenheit_para_celsius() {
    // Teste 1: Ponto de congelamento
    assert(aproximadamente_igual(fahrenheit_para_celsius(32.0), 0.0));
    
    // Teste 2: Ponto de ebulição
    assert(aproximadamente_igual(fahrenheit_para_celsius(212.0), 100.0));
    
    printf("✓ Todos os testes de Fahrenheit para Celsius passaram!\n");
}

void test_kelvin_para_celsius() {
    // Teste 1: Zero absoluto
    assert(aproximadamente_igual(kelvin_para_celsius(0.0), -273.15));
    
    // Teste 2: Ponto de congelamento da água
    assert(aproximadamente_igual(kelvin_para_celsius(273.15), 0.0));
    
    printf("✓ Todos os testes de Kelvin para Celsius passaram!\n");
}

int main() {
    printf("Iniciando testes de conversão de temperatura...\n\n");
    
    test_celsius_para_fahrenheit();
    test_celsius_para_kelvin();
    test_fahrenheit_para_celsius();
    test_kelvin_para_celsius();
    
    printf("\nTodos os testes de temperatura completados com sucesso!\n");
    return 0;
}