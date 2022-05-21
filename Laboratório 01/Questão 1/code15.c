/*
    Laboratório 01 - <CODE15>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que soma, subtrai, tira média aritmética, multiplica e potencia dois números.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b;

    printf("Insira dois números: (a, b)");
    scanf("(%f, %f)", &a, &b);

    printf("Soma: %.2f", a+b);
    printf("Subtração: %.2f", a-b);
    printf("Média: %.2f", (a+b)/2);
    printf("Produto: %.2f", a*b);
    printf("Potenciação: %.2f", pow(a, b));
    return 0;
}