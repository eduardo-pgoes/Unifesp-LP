/*
    Laboratório 01 - <CODE03>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: 156465
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que realiza a soma de dois números.
*/

#include <stdio.h>


int main() {
    // Declaração de variáveis
    int n1, n2;

    // Lê dois números.
    printf("Insira um número. (1/2): ");
    scanf("%d", &n1);
    printf("Insira um número. (2/2): ");
    scanf("%d", &n2);

    // Imprime a soma diretamente, sem variáveis intermediárias
    printf("Soma dos dois números: %d", n1+n2);

    return 0;
}