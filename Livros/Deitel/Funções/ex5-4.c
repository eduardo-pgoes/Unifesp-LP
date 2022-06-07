#include <stdio.h>

int maximum(int x, int y, int z);

int main() {
    setlocale(LC_ALL, "");
    
    wprintf(L"Insira três números: ");
    
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    wprintf(L"O maior dentre os três é %d.\n", maximum(x, y, z));

    return 0;
}

int maximum(int x, int y, int z) {
    int max = x;

    if (y > max) {
        max = y;
    }
    
    if (z > max) {
        max = z;
    }

    return max;
}