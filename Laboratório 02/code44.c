#include <stdio.h>

int main() {
    int n;
    int fat = 1;
    scanf("%d", &n);

    double K = 1;

    // Em cada fatorial calculado de 1 até n, adicione 1/fat a K.
    for (int i = 1; i <= n; i++) {
        fat = 1;
        for (int j = 1; j <= i; j++) {
            fat *= j;
        }
        K = K + (1/ (float) fat);
    }

    printf("K = %f", K);

    return 0;
}