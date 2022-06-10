#include <stdio.h>
#include <math.h>

int main() {
    int n1, n2;
    float q;
    scanf("%d %d", &n1, &n2);
    for (int i = n1; i <= n2; i++) {
        q = sqrt(i);
        if (pow(q, 2) == i) {
            printf("%d ", i);
        }
    }

    return 0;
}