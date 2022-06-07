#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    do {
        int opcao;
        wprintf(L"Insira sua opção:\n1 - Velocidade média\n2 - Área de um quadrado\n-1 pra sair: ");
        scanf("%d", &opcao);
        
        if (opcao == -1) {
            break;
        }

        switch (opcao) {
            case 1:
                float s, t;
                wprintf(L"Insira o espaço e o tempo: ");
                scanf("%f %f", &s, &t);
                wprintf(L"Velocidade média: %.2f m/s\n", s/t);
                break;
            case 2:
                float l;
                wprintf(L"Insira o lado do quadrado: ");
                scanf("%f", &l);
                wprintf(L"Área do quadrado: %.2f m^2\n", l*l);
                break;
            default:
                wprintf(L"Opção inválida, tente novamente.\n");
        }

    } while (1);
    
    return 0;
}