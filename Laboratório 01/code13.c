/*
    Laboratório 01 - <CODE13>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que calcula juros compostos.
*/

#include <math.h>
#include <stdio.h>

float juros(float montante, float capital) {
    return montante - capital;
}

float montante(float capital, float taxaFixa, float tempo) {
    return capital * pow((1 + (taxaFixa/100)), tempo);
}

int main() {
    float M, C, i, t;

    printf("Insira os valores de C, i e t: ");
    scanf("%f %f %f", &C, &i, &t);

    printf("Montante: R$ %.2f\n", montante(C, i, t));

    printf("Juros: R$ %.2f\n", juros(montante(C, i, t), C));

    return 0;
}