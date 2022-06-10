#include <stdio.h>

int main() {
    int n, divisores = 0, i = 2;

    scanf("%d", &num);

    while (i <= num) {
        if (num % i == 0) {
            divisores++;
        }
        i++;
    }

    if (divisores == 1) {
        printf("%d é primo\n", num);
    } else {
        printf("%d não é primo.\n", num);
    }

    return 0;
}