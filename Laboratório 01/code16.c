/*
    Laboratório 01 - <CODE16>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que mostra a diferença entre operações pré-fixas e pós-fixas.
*/

#include <stdio.h>

int main() {

    int a;
    printf("Insira um número, a: ");
    scanf("%d", &a);

    printf("a = %d\n", a);
    printf("Soma pós-fixa a++ = %d\n", a++);
    printf("a = %d\n", a);
    printf("Soma pré-fixa ++a = %d\n", ++a);
    printf("a = %d\n", a);
    printf("Subtração pós-fixa a-- = %d\n", a--);
    printf("a = %d\n", a);
    printf("Subtração pré-fixa --a = %d\n", --a);
    printf("a = %d\n", a);

    return 0;
}