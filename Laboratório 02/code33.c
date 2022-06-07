#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int num;
    scanf("%d", &num);
    if (num % 2 == 0) {
        wprintf(L"%d é par.\n", num);
    } else {
        wprintf(L"%d é ímpar.\n", num);
    }

    return 0;
}