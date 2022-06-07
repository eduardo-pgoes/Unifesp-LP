#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int voto;
    wprintf(L"Em qual candidato você votará? ");
    scanf("%d", &voto);

    switch(voto) {
        case 1:
            wprintf(L"Votou no candidato A.");
            break;
        case 2:
            wprintf(L"Votou no candidato B.");
            break;
        case 3:
            wprintf(L"Votou em branco.");
            break;
        default:
            wprintf(L"Votou nulo.");
    }

    return 0;
}