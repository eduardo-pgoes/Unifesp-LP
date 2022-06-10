#include <stdio.h>

void printSquare(int n);

void printSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printSquare(n);
    return 0;
}