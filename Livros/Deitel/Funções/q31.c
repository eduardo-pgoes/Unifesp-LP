#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int flip(int seed) {
    srand(seed);
    return (rand() % 2);
}

int main() {
    int heads = 0, tails = 0;
    int res;
    for (int i = 0; i < 100; i++) {
        res = flip(i); // sim, eu sei que os resultados desse rand sempre serão iguais...
        printf("%d\n", res);
        if (res) {
            heads++;
        } else {
            tails++;
        }
    }

    printf("Number of heads: %d\n", heads);
    printf("Number of tails: %d\n", tails);

    return 0;
}