#include <stdio.h>
#include <math.h>

int prime(int n) {
    int div = 0; // número de divisores

    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {
            div += 1;
        }
    }

    return (div == 0) ? 1 : 0;
}

int main() {
 
    printf("List of prime numbers, from 1 to 10000: \n");
    
    for (int i = 1; i <= 10000; i++) {
        if (prime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}