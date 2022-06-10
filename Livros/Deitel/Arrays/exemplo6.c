#include <stdio.h>
#define SIZE 99


void bubbleSort(int a[]) {
    int pass, j, hold;

    for (pass = 1; pass < SIZE; pass++) {
        for (j = 0; j < SIZE-1; j++) {
            if (a[j] > a[j+1]) {
                hold = a[j];
                a[j] = a[j+1];
                a[j+1] = hold;
            }
        }
    }
}

double mean(int a[]) {
    int sum;
    for (int i = 0; i < SIZE; i++) {
        sum += a[i];
    }
    return sum / (double) SIZE;
}

int main() {
    return 0;
}