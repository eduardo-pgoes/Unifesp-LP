/*
    Enunciado:
        Faça um programa que preencha dois vetores de dez elementos numéricos cada um e mostre o vetor resultante
        da intercalação deles.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int v1[10], v2[10], v3[20];

    // Um for para a leitura dx'os dois vetores seria mais otimizado, mas aqui optei pela claridade.
    for (int i = 0; i < 10; i++) {
        wprintf(L"Insira o elemento %d do vetor 1.\n", i+1);
        scanf("%d", &v1[i]);
    }

    for (int i = 0; i < 10; i++) {
        wprintf(L"Insira o elemento %d do vetor 2.\n", i+1);
        scanf("%d", &v2[i]);
    }

    // Definição do vetor intercalado
    // Tenho plena consciência de que essa solução é deselegante, mas não consegui pensar em outra.

    int j = 0;
    // Índices pares
    for (int i = 0; i < 10; i++) {
        v3[j] = v1[i];
        j += 2;
    }
    // Índices ímpares
    j = 1;
    for (int i = 0; i < 10; i++) { 
        v3[j] = v2[i];
        j += 2;
    }

    // Impressão do vetor
    for (int i = 0; i < 20; i++) {
        wprintf(L"v3[%d] = %d\n", i, v3[i]);
    }
    

    return 0;
}