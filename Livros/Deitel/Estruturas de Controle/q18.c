#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero;
    float saldo, totalCobranca, totalCredito, limite;

    do {
        wprintf(L"Entre com o número da conta: (-1 para sair) ");
        scanf("%f", &numero);
        if (numero == -1) {
            break;
        }

        wprintf(L"Entre com o saldo inicial: ");
        scanf("%f", &saldo);

        wprintf(L"Entre com o total de cobranças: ");
        scanf("%f", &totalCobranca);

        wprintf(L"Entre com o total de créditos: ");
        scanf("%f", &totalCredito);

        wprintf(L"Entre com o limite de crédito: ");
        scanf("%f", &limite);

        // TO-DO: resto

    } while (1)

    return 0;
}