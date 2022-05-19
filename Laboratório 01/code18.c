/*
    Laboratório 01 - <CODE18>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que imprime o sucessor e o antecessor de um número inteiro.
*/

#include <stdio.h>

int main() {
    int a;

    printf("Insira um número: ");
    scanf("%d",  &a);

    printf("Sucessor: %d\n", a+1);
    printf("Antecessor: %d", a-1);
}