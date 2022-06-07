#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    float altura;
    int genero;

    wprintf(L"Insira sua altura: ");
    scanf("%f", &altura);

    wprintf(L"Insira seu gênero\n1 - Homem\n2 - Mulher: ");
    scanf("%d", &genero);

    wprintf(L"Seu peso ideal é %.2f kg.", (genero == 1) ? ((72.7 * altura) - 58) : ((62.1 * altura) - 44.7));

    return 0;
}