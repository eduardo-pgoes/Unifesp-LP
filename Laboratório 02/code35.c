#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if (a > (b+c) || b > (a+c) || c > (a+b)) {
        wprintf(L"Estes números desrespeitam a desigualdade triangular!\n");
    } else {
        if ((a == b) && (b == c)) {
            wprintf(L"Triângulo equilátero.\n");
        } else if ((a == b) || (a == c) || (b == c)) {
            wprintf(L"Triângulo isóceles.\n");
        } else {
            wprintf(L"Triângulo escaleno.\n");
        }
    }

    return 0;
}