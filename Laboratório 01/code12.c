/*
    Laboratório 01 - <CODE12>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que calcula a velocidade e a altura do lançamento no instante t de uma bola arremessada com uma
        velocidade inicial v0.
        Desconsiderar a resistência do ar.
*/

#include <stdio.h>
#include <math.h>

// Definindo a constante da gravidade
#define G 9.81

// Função que implementa a fórmula v(t) = v0 - gt
float velocidade(float v0, float t) {
    return v0 - (G * t);
}

// Função que implementa a fórmula h(t) = v0t - gt^2/2
float altura(float v0, float t) {
    return (v0 * t) - ((G * pow(t,2)) / 2);
}

int main() {
    float v0, t;
    printf("Insira a velocidade incial da bola (m/s): ");
    scanf("%f", &v0);
    printf("Insira o instante, t (s): ");
    scanf("%f", &t);

    printf("Altura no instante %.2fs: %.2f m\n", t, altura(v0, t));
    printf("Velocidade no instante %.2fs: %.2f m/s\n", t, velocidade(v0, t));
    return 0;
}