#include <stdio.h>

int main() {
    int num[8], pos[8], neg[8];

    int j = 0, k = 0;
    for (int i = 0; i < 8; i++) {
        printf("Insira um número; (%d/8) ", i+1);
        scanf("%d", &num[i]);
        if (num[i] > 0) {
            pos[j] = num[i];
            j++;
        } else if (num[i] < 0) {
            neg[k] = num[i];
            k++;
        }
    }
    
    if (j == 0) {
        printf("Vetor de números positivos vazio."); 
    } else {
        for (int i = 0; i < j; j++) {
            printf("Índice %d, número positivo %d\n", i, pos[i]);
        }
    }

    if (k == 0) {
        printf("Vetor de números negativos vazio.");
    } else {
        for (int i = 0; i < k; j++) {
            printf("Índice %d, número negativo %d\n", i, neg[i]);
        }
    }

    return 0;
}