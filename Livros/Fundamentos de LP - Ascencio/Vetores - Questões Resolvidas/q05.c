#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int x[10], y[10], uniao[20], diff[10], soma[10], prod[10], interseccao[10];

    for (int i = 0; i < 10; i++) {
        wprintf(L"Insira o número %d da matrix x: ", i+1);
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < 10; i++) {
        wprintf(L"Insira o número %d da matrix y: ", i+1);
        scanf("%d", &y[i]);
    }

    // Definição do vetor de união
    int j = 0, contadorY = 10;
    int igual = 0;
    // Começa igual ao vetor x, foda-se.
    for (int i = 0; i < 10; i++) {
        uniao[i] = x[i];
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (uniao[j] == y[i]) {
                igual = 1;
            }
        }
        if (igual == 0) {
            uniao[contadorY] = y[i];
        }
        igual = 0;
    }

    // Definição do vetor de diferença
    int contadorDiff = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (x[i] == y[i]) {
                igual = 1;
            }
        }
        if (igual == 0) {
            diff[contadorDiff] = x[i];
            contadorDiff++;
        }
        igual = 0;
    }
    
    // Definição do vetor de soma
    for (int i = 0; i < 10; i++) {
        soma[i] = x[i] + y[i];
    }

    // Definição do vetor produto
    for (int i = 0; i < 10; i++) {
        prod[i] = x[i] * y[i];
    }

    // Definição do vetor intersecção
    int contadorInter = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (x[i] == y[i]) {
                igual = 1;
            }
        }
        if (igual == 1) {
            interseccao[contadorInter] = x[i];
            contadorInter++;
        }
        igual = 0;
    }

    // TO-DO: Printar todos os vetores. Que preguiça.
}