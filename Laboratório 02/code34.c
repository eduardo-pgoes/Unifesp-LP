#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float sal;
    wprintf(L"Insira o seu salário: (R$) ");
    scanf("%f", &sal);


    if (sal <= 1045.00) {
        sal *= 1.3;
    } else if (sal < 2090.00) {
        sal *= 1.25
    } else {
        sal *= 1.2;
    }

    wprintf(L"Salário reajustado: R$ %.2f\n", sal);

    return 0;
}