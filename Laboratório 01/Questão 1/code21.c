/*
    Laboratório 01 - <CODE21>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que calcule a resistência equivalente numa associação de resistores, paralela ou em série.
*/

#include <stdio.h>

float associacaoParalela(float R1, float R2, float R3) {
    return 1 / ((1/R1) + (1/R2) + (1/R3));
}

float associacaoSerie(float R1, float R2, float R3) {
    return R1 + R2 + R3;
}

int main() {
    float r1, r2, r3, req;

    int tipoAssociacao;

    printf("Insira as resistencias, em ohms (r1, r2, r3)");
    scanf("%f %f %f", &r1, &r2, &r3);

    printf("A associacao de resistores sera em serie ou paralela? (1 para serie, 2 para paralela) ");
    scanf("%d", &tipoAssociacao);

    if (tipoAssociacao == 1) {
        req = associacaoSerie(r1, r2, r3);
    } else if (tipoAssociacao == 2) { 
        req = associacaoParalela(r1, r2, r3);
    }

    float v;
    printf("Insira a diferenca de potencial aplicada no circuito. ");
    scanf("%f", &v);

    float i = v / req;
    printf("Corrente: %.2f A", i);

    printf("Tensões parciais:\n V1: %.2fV\n V2: %.2fV\n V3: %.2fV\n", r1*(v/req), r2*(v/req), r3*(v/req));
}