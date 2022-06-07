#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int ano;
    wprintf(L"Informe o ano: ");
    scanf("%d", &ano);

    ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) ? wprintf(L"Ano bissexto") : wprintf  (L"Ano não é bissexto");

    return 0;
}