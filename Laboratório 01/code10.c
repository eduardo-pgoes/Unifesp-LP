/*
    Laboratório 01 - <CODE10>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que diz quantos alunos podem ficar dentro de uma sala de aula, respeitando o espaço
        de 2,5m^2 por aluno. O usuário deve informar a largura e o comprimento do local.
*/

#include <stdio.h>

int main() {
    float comp, larg;
    int alunos;
    printf("Digite as medidas da sala: (comprimentoxlargura): \n");
    scanf("%fx%f", &comp, &larg);
    alunos = (comp * larg) / 2.5;
    printf("Cabe(m) aproximadamente %d aluno(s) numa sala de %.2f m^2. \n", alunos, (comp * larg));
}
