#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int guess = -1;
    srand(time(NULL));
    int n = rand() % 1000;
    printf("I have a number between 1 and 1000.\nCan you guess my number?\nType your first guess. ");
    scanf("%d", &guess);

    while (guess != n) {
        if (guess > n) {
            printf("Too high. Try again:\n");
            scanf("%d", &guess);
        } else if (guess < n) {
            printf("Too low. Try again:\n");
            scanf("%d", &guess);
        }
    }

    printf("Congratulations! You have guessed the number.\n");


    return 0;
}