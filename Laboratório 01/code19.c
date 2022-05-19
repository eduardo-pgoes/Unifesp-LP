/*
    Laboratório 01 - <CODE19>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que realiza uma conversão cambial.
*/

float conversao(float cambio, float valor) {
    return valor / cambio;
}

int main() {
    float cambio, valor;

    printf("Insira o valor do câmbio: ");
    scanf("%f", &cambio);

    printf("Insira o valor a ser convertido: ");
    printf("%f", &valor);

    printf("Resultado da conversão: %.2f\n", conversao(cambio, valor));

    return 0;
}