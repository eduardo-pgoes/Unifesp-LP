/*
    Laboratório 01 - <CODE09>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que calcula a média aritmética de dois grupos, com 3 notas em cada.
        Calcular também a média das médias dos grupos.
*/

#include <stdio.h>

int main() {
    // Notas do grupo A
    float na1, na2, na3;

    // Notas do grupo B
    float nb1, nb2, nb3;

    // Média dos grupos A e B
    float mediaA, mediaB;

    printf("Insira as notas do grupo A: (n1, n2, n3): ");
    scanf("%f %f %f", &na1, &na2, &na3);

    printf("Insira as notas do grupo B: (n1, n2, n3): ");
    scanf("%f %f %f", &nb1, &nb2, &nb3);

    // Cálculo da média dos grupos
    mediaA = (na1 + na2 + na3) / 3;
    mediaB = (nb1 + nb2 + nb3) / 3;

    printf("Media do grupo A: %.2f\n", mediaA);
    printf("Media do grupo B: %.2f\n", mediaB);
    printf("Media das medias: %.2f\n", (mediaA + mediaB)/2);

    return 0;
}