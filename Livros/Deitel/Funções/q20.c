#include <stdio.h>

void printSquare(int n, char fillCharacter);

void printSquare(int n, char fillCharacter) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", fillCharacter);
        }
        printf("\n");
    }
}

int main() {
    int n, fill;
    scanf("%d %c", &n, &fill);
    printSquare(n, fill);
    return 0;
}