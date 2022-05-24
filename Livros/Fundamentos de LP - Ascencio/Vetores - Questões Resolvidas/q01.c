/*
    Enunciado:
        Faça um programa que preencha um vetor com nove números inteiros, calcule e mostre os números
        primos e suas respectivas posições.
*/

#include <stdio.h>
#include <locale.h>

int main() { 
    // Definindo locale, p/ permitir acentos   
    setlocale(LC_ALL, "");
    
    int vetor[9];

    // Alocação da entrada no vetor
    for (int i = 0; i < 9; i++) {
        wprintf(L"Insira um número. (%d/9): ", i+1);
        scanf("%d", &vetor[i]);
    }

    // Verificação de primos dentro do vetor
    for (int i = 0; i < 9; i++) {
        // Conta o número de divisores, a partir do 2, de um número. Caso nada seja encontrado, ele é primo.
        int cont = 0;
        for (int j = 2; j < vetor[i]; j++) {
            if (vetor[i] % j == 0) {
                cont++;
                break;
            }
        }
        if (cont == 0) {
            wprintf(L"O número %d é primo, e seu índice no vetor é %d.\n", vetor[i], i);
        }
    }

    return 0;
}