#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float a, b;
    char operador;

    wprintf(L"Informe uma expressão aritmética (+, -, * ou /): ");
    scanf("%f%c%f", &a, &operador, &b);

    switch (operador) {
        case '+':
            wprintf(L"Resultado: %f", a+b);
            break;
        case '-':
            wprintf(L"Resultado: %f", a-b);
            break;
        case '/':
            if (b != 0) {
                wprintf(L"Resultado: %f", a/b);
            }
            break;
        case '*' {
            wprintf(L"Resultado: %f", a*b);
            break;
        }
    }

    return 0;
}