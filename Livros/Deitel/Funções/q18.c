#include <stdio.h>

int even(int n);

int even(int n) {
    return (n % 2 == 0);
}

int main() {
    printf("Enter a number: ");
    scanf("%d", &n);

    if (even(n)) {
        printf("%d is even\n", n);
    } else {
        printf("%d is odd\n", n);
    }
    
    return 0;
}