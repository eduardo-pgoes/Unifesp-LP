#include <stdio.h>

int main() {
    int n[10];
    int i;

    // inicialização da array
    for (i = 0; i < 10; i++) {
        n[i] = 0;
    }

    printf("%s%13s\n", "Elemento", "Valor");

    for (int i = 0; i < 10; i++) {
        printf("%7d%13d\n", i, n[i]);
    }
}