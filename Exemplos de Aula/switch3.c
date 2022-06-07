#include <stdio.h>
#include <locale.h>

#define PI 3.14

int main() {
    int opcao;

    setlocale(LC_ALL, "");

    wprintf(L"Insira uma opção: 1 - Área trapézio\n2 - Volume pirâmide\n3 - Volume da esfera\n4 - Área de um círculo\n-1 - Sair");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            float bMaior, bMenor, h;
            wprintf(L"Insira a base maior, menor e a altura do trapézio. ");
            scanf("%f %f", &bMaior, &bMenor, &h);
            wprintf(L"Área do trapézio: %.2f m^2\n", (bMaior + bMenor)/2);
            break;
        case 2:
            float hPir, a, b, areaBase, v;
            wprintf(L"Insira as duas arestas da pirâmide e a altura; ");]
            scanf("%f %f %f", &hPir, &a, &b);
            areaBase = (a*b)/2;
            wprintf(L"Volume da pirâmide: %.2f m^3\n", (areaBase * hPir)/2);
            break;
        case 3:
            float r;
            wprintf(L"Insira o raio da esfera; ");
            scanf("%f", &r);
            wprintf(L"Volume da esfera: %.2f m^3\n", (4 * pi * r * r * r)/3);
            break;
        case 4:
            float rCirc;
            wprintf(L"Insira o raio do círculo: ");
            scanf("%f", &rCirc);
            wprintf(L"Área do círculo: %.2f m^2", (PI * rCirc * rCirc));
            break;
        default:
            wprintf(L"Opção inválida, tente novamente.");
    }

    return 0;
}