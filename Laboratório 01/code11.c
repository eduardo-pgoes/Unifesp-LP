/*
    Laboratório 01 - <CODE11>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que calcula o consumo médio de combustível.
*/

#include <stdio.h>

int main() {
    float distancia, litros;

    printf("Insira a distância percorrida, em km: ");
    scanf("%f", &distancia);

    printf("Insira o consumo de gasolina, em litros: ");
    scanf("%f", &litros);

    printf("O consumo médio de combustível foi de %.2f km/L.\n", (distancia/litros));

    return 0;
}