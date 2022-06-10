#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int s;
    for (int i = n1; i<=n2; i++) {
        if ((i %2 != 0) && (i % 3 == 0)) {
            s += i;
        }
    }

    printf("S = %d\n", s);

    return 0;
}