/*
    Laboratório 01 - <CODE07>
    Dados do aluno:
    Nome: Eduardo (oculto no GitHub)
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que desenha uma árvore de natal, deixando o usuário escolher seu enfeite.
*/

#include <stdio.h>

void arvoreDeNatal(char c) {
    printf("       %c     \n", c);
    printf("      /\\      \n");
    printf("     /\\*\\     \n");
    printf("    /\\O\\*\\    \n");
    printf("   /*/\\/\\/\\   \n");
    printf("  /\\O\\/\\*\\/\\  \n");
    printf(" /\\*\\/\\*\\/\\/\\ \n");
    printf("/\\O\\/\\/*/\\/O/\\\n");
    printf("      ||      \n");
    printf("      ||      \n");
}

int main() {
    char c;
    printf("Insira o caracter que voce quer como enfeite da sua arvore: ");
    scanf("%c", &c);
    arvoreDeNatal(c);
    return 0;
}