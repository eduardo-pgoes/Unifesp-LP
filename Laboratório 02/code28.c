#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    double IMC, peso, altura;
    wprintf(L"Informe o seu peso e altura: ");
    wscanf(L"%lf %lf", &peso, &altura);

    IMC = peso / (altura * altura);
    
    wprintf(L"Seu IMC é: %.2lf\n", IMC);

    (IMC < 18.5) ? wprintf(L"Você está abaixo do peso\n") :
    (IMC >= 18.5 && IMC <= 24.9) ? wprintf(L"Você está em um peso normal.\n") : 
    (IMC >= 25.0 && IMC <= 29.9)? wprintf(L"Você está em sobrepeso.\n") : 
    (IMC >= 30.0 && IMC <= 34.9) ? wprintf(L"Você está em obseidade grau I.\n") :
    (IMC >= 35.0 && IMC <= 39.9) ? wprintf(L"Você está em obesidade grau II.\n") :
    wprintf(L"Você está obeso mórbido / obeso grau III.\n");

    return 0;
}