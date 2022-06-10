#include <stdio.h>

int multiples(int a, int b);

int multiples(int a, int b) {
    return (a % b == 0);
}

int main() {

    
    int a = 1, b = 1;
    
    while ((a != 0) && (b != 0)) {
        printf("Insert a pair of numbers. (0 to stop execution): ")
        scanf("%d %d", &a, &b);
        if (multiples(a, b)) {
            printf("%d and %d are multiples\n", a, b);
        } else {
            printf("%d and %d are not multiples\n", a, b);
        }
    }
    
    return 0;
}