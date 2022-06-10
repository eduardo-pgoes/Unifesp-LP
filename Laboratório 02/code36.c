#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int voto;
    wprintf(L"Informe o código do seu voto:\n");
    scanf("%d", &voto);

    switch (voto) {
        case 1:
            wprintf(L"Você votou no candidato A.\n");
            break;
        case 2:
            wprintf(L"Você votou no candidato B.\n");
            break;
        case 3:
            wprintf(L"Você votou em branco.\n");
            break;
        default:
            wprintf(L"Você anulou seu voto, não votou em candidato algum.\n");
    }
    
    return 0;
}