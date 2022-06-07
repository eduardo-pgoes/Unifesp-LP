#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int n;
    wprintf(L"Digite um número n: ");
    scanf("%d", &n);

    wprintf(L"Paridade de %d é: %s", n, (n % 2 == 0) ? "Par":"Ímpar");

    return 0;
}