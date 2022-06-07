#include <stdio.h>
#include <stdlib.h>

int rolarDado(int nFaces);

int rolarDado(int nFaces) {
    return 1 + (rand() % nFaces);
}

int main() {
    for (int i = 0; i < 100; i++) {
        printf("%10d\n", rolarDado(6));
    }   
}