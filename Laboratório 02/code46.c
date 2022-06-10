#include <stdio.h>

int primo(int n);

int primo(int n) {
    int nDivisores = 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            nDivisores += 1;
        }
    }

    return (nDivisores == 0) ? 1 : 0;
}

// Mostra todos os primos entre n1 e n2
int main() {

    int n1, n2;
    scanf("%d %d", &n1, &n2);

    printf("Primos entre %d e %d: ", n1, n2);

    for (int i = n1; i <= n2; i++) {
        if (primo(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}