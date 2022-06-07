#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int temp;
    wprintf(L"Insira a temperatura (celsius): ");
    scanf("%d", &temp);

    if (temp < 10) {
        wprintf(L"Está muito frio.\n");
    } else if (temp < 20) {
        wprintf(L"Está frio.\n";)
    } else if (temp < 30) {
        wprintf(L"A temperatura está agradável.\n");
    } else {
        wprintf(L"Temperatura MUITO quente.\n");
    }

    return 0;
}