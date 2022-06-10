#include <stdio.h>

int main() {
    int n, divisores = 0;

    scanf("%d", &num);

    for (int i = 2; i <= n; i++) {
        if (num % i == 0) {
            divisores++;
        }
    }

    if (divisores == 1) {
        printf("%d é primo\n", num);
    } else {
        printf("%d não é primo.\n", num);
    }

    return 0;
}