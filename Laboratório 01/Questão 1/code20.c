/*
    Laboratório 01 - <CODE20>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que calcula a potência elétrica.
*/

float potencia(float voltagem, float intensidade) {
    return voltagem * intensidade;
}

int main() {
    float v,  i;

    printf("Insira a diferença de potencial, em Volts: ");
    scanf("%f", &v);

    printf("Insira a intensidade da corrente: ");
    scanf("%f", &i);

    printf("Potência elétrica: %.2f W", potencia(v, i));
}