#include <stdio.h>

int main() {
    int n, divisores = 0, i = 2;

    scanf("%d", &num);

    do {
        if (num % i == 0) {
            divisores++;
        }
        i++;
    } while (i <= num);

    if (divisores == 1) {
        printf("%d é primo\n", num);
    } else {
        printf("%d não é primo.\n", num);
    }

    return 0;
}