#include <stdio.h>

int perfect(int n) {
    int s = 0; // Somatório dos fatores
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            s += i; // É fator? Soma
        }
    }
    return (s == n) ? 1 : 0; // Soma dos fatores é igual ao número? Ele é perfeito
}

int main() {
    for (int i = 1; i <= 1000; i++) {
        if (perfect(i)) {
            printf("%d is perfect.\n", i);
        }
    }
    return 0;
}