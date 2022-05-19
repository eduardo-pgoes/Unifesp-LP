/*
    Laboratório 01 - <CODE05>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que recebe um caracter e o imprime no formato decimal, octal e hexadecimal.
*/

#include <stdio.h>

int main() {
    char c;
    printf("Insira um caracter: ");
    scanf("%c", &c);

    printf("Formato decimal: %d\n", c);
    printf("Formato octal: %o\n", c);
    printf("Formato hexadecimal: %x\n", c);
}
