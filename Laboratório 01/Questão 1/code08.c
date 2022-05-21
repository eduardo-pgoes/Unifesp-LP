/*
    Laboratório 01 - <CODE08>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que calcula o raio de um círculo.
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    float raio;
    printf("Insira o raio do círculo. ");
    scanf("%f", &raio);

    // Calcula a área diretamente, pela fórmula A = π * r²
    printf("Área: %.2f\n", PI * pow(raio, 2));

    return 0;
}