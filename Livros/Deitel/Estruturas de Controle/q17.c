#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    float km, l;
    int acabar = 0;
    do {
        wprintf(L"Insira o número de litros consumidos: (-1 pra finalizar): ");
        scanf("%f", &l);
        if (l == -1) {
            break;
        }        

        wprintf(L"Insira os km percorridos: ");
        scanf("%f", &km);

        wprintf(L"A taxa litro/km para esse automóvel é %.2f.\n", (km/l));
    } while (1);

    return 0;
}