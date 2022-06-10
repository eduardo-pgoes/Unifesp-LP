#include <stdio.h>
#include <locale.h>

int main() {
    int fn, f1 = 0, f2 = 1, aux;
    scanf("%d", &fn);

    for (int i = 1; i <= fn; i++) {
        wprintf(L"%d ", f1);
        aux = f1+f2;
        f1 = f2;
        f2 = aux;
    }

    return 0;
}