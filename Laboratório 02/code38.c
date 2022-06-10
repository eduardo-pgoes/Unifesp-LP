#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int opcao;
    wprintf(L"Você deseja calcular:\n1 - Área de um trapézio\n2 - Volume de um prisma\n");
    scanf("%d", &opcao);
    float h; // altura é comum às duas fórmulas.

    switch (opcao) {
        case 1:
            float bMaior, bMenor;
            wprintf(L"Informe B, b e h: (base maior, menor e altura) ");
            scanf("%f %f %f", &B, &b, &h);
            wprintf(L"Área: %.2f m^2\n", ((bMaior + bMenor) * h) / 2);
            break;
        case 2:
            float a, b, h;
            wprintf(L"Informe a, b e h: ");
            scanf("%f %f %f", &a, &b, &h);
            
            wprintf(L"Volume: %.2f m^3\n", ((a * b) / 2) * h / 3);
            break;
    }
    
    return 0;
}