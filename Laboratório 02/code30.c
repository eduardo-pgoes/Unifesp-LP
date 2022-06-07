#include <stdio.h>
#include <locale.h>

// Protótipo das funções
int max(int x, int y);

int min(int x, int y);

// Implementação das funções com operadores ternários
int max(int x, int y) {
    return (x >= y) ? x : y;
}

int min (x, y) {
    return (x <= y) ? x : y;
}

int main() {
    setlocale(LC_ALL, "");
    int x, y;
    wprintf(L"Insira dois números inteiros: ");
    scanf("%d %d", &x, &y);

    wprintf("Max: %d Min: %d\n", max(x, y), min(x,y));
    return 0;
}