/*
    Laboratório 01 - <CODE04>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que calcula a velocidade média de um corpo.
*/

int main() {
    // Declara e lê o espaço (s) e o tempo (t).
    float s, t;
    printf("Insira a distância percorrida pelo corpo: ");
    scanf("%f", &s);
    printf("Insira o tempo decorrido: ");
    scanf("%f", &t);

    // Imprime a velocidade média diretamente, sem variáveis intermediárias
    printf("Velocidade média: %.2f m/s", (s/t));
}